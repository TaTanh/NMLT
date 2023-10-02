#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void Nhap(float& x)
{
	cout << "Nhap du lieu: ";
	cin >> x;
}
float TinhToan(float& x)
{
	float s = 0;
	float dau = 1;
	float e = 4;
	int i = 1;
	while (e >= pow(10, -6))
	{
		e = 4./i;
		s = s + dau *e;
		i = i + 2;
		dau = -dau;
	}
	return s;
}
void Xuat(float& x) {
	cout << "Dap an la: " << TinhToan(x);
}
int main()
{
	float x;
	Nhap(x);
	Xuat(x);
}