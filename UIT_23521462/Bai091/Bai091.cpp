#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void Nhap(float& n, float& x)
{
	cout << "Nhap du lieu: ";
	cin >> x >> n;
}
float TinhToan(float& n, float& x)
{
	float s =-1;
	float t = 1;
	float m = 1;
	float i = 2;
	float dau = 1;
	while (i <= 2*n)
	{
		t = t * x*x;
		m = m *i *(i-1);
		s = s + dau * t / m;
		i = i + 2;
		dau = -dau;
	}
	return s;
}
void Xuat(float& n, float& x) {
	cout << "Dap an la: " << TinhToan(n, x);
}
int main()
{
	float n, x;
	Nhap(n, x);
	Xuat(n, x);
}