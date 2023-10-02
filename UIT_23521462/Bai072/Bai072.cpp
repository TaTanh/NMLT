#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void Nhap(int& n)
{
	cout << "Nhap du lieu: ";
	cin >> n;
}
float TinhToan(int& n)
{
	float s = 0;
	int m = 0;
	int i = 1;
	while (i <= n)
	{
		m = m + i;
		s = s + 1. / float(m);
		i = i + 1;
	}
	return s;
}
void Xuat(int& n) {
	cout << "Dap an la: " << TinhToan(n);
}
int main()
{
	int n;
	Nhap(n);
	Xuat(n);
}