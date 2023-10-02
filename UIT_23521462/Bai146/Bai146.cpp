#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void Nhap(int& n)
{
	cout << "Nhap du lieu: ";
	cin >> n;
}
int TinhToan(int& n)
{
	int dn = 0;
	int t=n;
	int dv;
	while (t!=0)
	{
		dv = t % 10;
		dn = dn * 10 + dv;
		t = t / 10;
	}
	if (dn==n)
		return 1;
	else
		return 0;
}
void Xuat(int& n) {
	if (TinhToan(n) == 1)
		cout << "DX";
	if (TinhToan(n) == 0)
		cout << "ko DX";
}
int main()
{
	int n;
	Nhap(n);
	Xuat(n);
}