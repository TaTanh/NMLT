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
	int s = x;
	int t = x;
	int i = 3;
	while (i <= 2*n +1)
	{
		t = t * x*x;
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