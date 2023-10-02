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
	float s = 0;
	float m=0;
	float i = 1;
	float dau = 1;
	while (i <= n )
	{
		m = m + i;
		s = s + dau/m;
		i = i + 1;
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