#include <iostream>
#include <cmath>
using namespace std;
void Nhap(int& n, int& x)
{
	cout << "Nhap du lieu: ";
	cin >> x >> n;
}
int TinhToan(int& n, int& x)
{
	int s = 0;
	int t = 1;
	int i = 1;
	while (i <= 2*n)
	{
		t = t * x * x;
		s = s + t;
		i = i + 2;
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