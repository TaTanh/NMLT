#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void Nhap(int& a, int& b)
{
	cout << "Nhap du lieu: ";
	cin >> a >> b;
}
int TinhToan(int& a, int& b)
{
	int m = abs(a);
	int n = abs(b);
	int bcnn;
	while (m * n != 0)
	{
		if (m > n)
			m = m - n;
		n = n - m;
	}
	bcnn = abs(a * b) / (m + n);
	return bcnn;
}
void Xuat(int& a, int& b) {
	cout << "Dap an la: " << TinhToan(a, b);
}
int main()
{
	int a, b;
	Nhap(a, b);
	Xuat(a, b);
}