#include <iostream>
#include <cmath>
using namespace std;
void Nhap(int& n)
{
	cout << "Nhap du lieu: ";
	cin >> n;
}
int TinhToan(int& n, int& t, int& s, int& dv)
{
	t = n;
	s = 0;
	while (t != 0)
	{
		dv = t % 10;
		if (dv % 2 == 0)
			s = s + dv;
		t = t / 10;
	}
	return s;
}
void Xuat(int& n, int& t, int& s, int& dv) {
	cout << "Dap an la: " << TinhToan(n, t, s, dv);
}
int main()
{
	int n, t, s, dv;
	Nhap(n);
	Xuat(n, t, s, dv);
}