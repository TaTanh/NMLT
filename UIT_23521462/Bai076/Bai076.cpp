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
	float s = 1+x;
	int t = x;
	int m = 1;
	int i = 3;
	while (i <= 2*n +1)
	{
		t = t * x * x;
		m = m * i * (i - 1);
		s = s + float(t) / float(m);
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