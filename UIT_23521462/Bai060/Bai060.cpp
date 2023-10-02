#include <iostream>
#include <cmath>
using namespace std;
void Nhap(int& n)
{
	cout << "Nhap du lieu: ";
	cin >> n;
}
int TinhToan(int& n, int& t, int& tich, int& dv)
{
	t = n;
	tich = 1;
	while (t != 0)
	{
		dv = t % 10;
		tich = tich * dv;
		t = t / 10;
	}
	return tich;
}
void Xuat(int& n, int& t, int& tich, int& dv) {
	cout << "Dap an la: " << TinhToan(n, t, tich,dv);
}
int main()
{
	int n, t, tich,dv;
	Nhap(n);
	Xuat(n, t, tich,dv);
}