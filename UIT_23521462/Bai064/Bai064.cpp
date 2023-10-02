#include <iostream>
#include <cmath>
using namespace std;
void Nhap(int& n)
{
	cout << "Nhap du lieu: ";
	cin >> n;
}
int TinhToan(int& n, int& t, int& lc, int& dv)
{
	t = n;
	lc = n%10;
	while (t != 0)
	{
		dv = t % 10;
		if (dv > lc != 0)
			lc = dv;
		t = t / 10;
	}
	return lc;
}
void Xuat(int& n, int& t, int& lc, int& dv) {
	cout << "Dap an la: " << TinhToan(n, t, lc, dv);
}
int main()
{
	int n, t, lc, dv;
	Nhap(n);
	Xuat(n, t, lc, dv);
}