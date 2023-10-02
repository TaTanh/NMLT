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
	float s = 1;
	int t = 1;
	int i = 1;
	while (i <= n)
	{
		t = t * x;
		s = s + (float(i)+1)*float(t);
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