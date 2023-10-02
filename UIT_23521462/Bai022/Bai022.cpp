#include <iostream>
#include <cmath>
using namespace std;
void Nhap(int& n)
{
	cout << "Nhap du lieu: ";
	cin >> n;
}
int TinhToan(int& n, int& dv)
{
	dv = n % 10;
	return dv;
}
void Xuat(int& n, int& dv)
{
	cout << "Dap an la: " << TinhToan(n, dv);
}
int main()
{
	int n, dv;
	Nhap(n);
	Xuat(n, dv);
}