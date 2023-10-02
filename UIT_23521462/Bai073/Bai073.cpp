#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void Nhap(int& n,int& x)
{
	cout << "Nhap du lieu: ";
	cin >> x >> n;
}
float TinhToan(int& n, int& x)
{
	float s = 0;
	int t = 1;
	int m = 0;
	int i = 1;
	while (i <= n)
	{
		t = t * x;
		m = m + i;
		s = s + float(t)/float(m);
		i = i + 1;
	}
	return s;
}
void Xuat(int& n,int& x) {
	cout << "Dap an la: " << TinhToan(n,x);
}
int main()
{
	int n,x;
	Nhap(n,x);
	Xuat(n,x);
}