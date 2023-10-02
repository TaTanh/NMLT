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
	int t = 1;
	int k = 1;
	while (2*t <= n)
	{
		t = t * 2;
		k = k + 1;
	}
	return k;
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