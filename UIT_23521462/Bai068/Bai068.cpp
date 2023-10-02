#include <iostream>
#include <cmath>
using namespace std;
void Nhap(int& n)
{
	cout << "Nhap du lieu: ";
	cin >> n;
}
int TinhToan(int& n)
{
	int s=0;
	int t = 1;
	int i = 1;
	while (i<=n)
	{
		t = t * i;
		s = s + t;
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