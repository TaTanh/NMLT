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
	float xx = (x * 3.14) / 180;
	float s = xx;
	float t = xx;
	float m = 1;
	int dau = -1;
	float e = xx;
	int i = 3;
	while (e >= pow(10,-6))
	{
		t = t * xx * xx;
		m = m * (i - 1) * i;
		e = t / m;
		s = s + dau * e;
		dau = -dau;
		i = i + 2;
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