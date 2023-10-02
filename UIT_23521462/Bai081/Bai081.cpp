#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void Nhap(int& n, int& x)
{
	cout << "Nhap du lieu: ";
	cin >> x >> n;
}
float TinhToan(int& n, int& x)
{
	float s = 0;
	int m = 1;
	int i = 0;
	while (i <= n)
	{
		m = m * (x + i);
		s = s + 1. / float(m);
		i = i + 1;
	}
	return s;
}
void Xuat(int& n, int& x) {
	cout << "Dap an la: " << TinhToan(n, x);
}
int main()
{
	int n, x;
	Nhap(n, x);
	Xuat(n, x);
}