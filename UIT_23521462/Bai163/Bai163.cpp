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
	int t = n;
	while (t%2 ==0)
	{
		t = t / 2;
	}
	return t;
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