#include <iostream>
#include <cmath>
using namespace std;
void Nhap(int& n)
{
	cout << "Nhap du lieu: ";
	cin >> n;
}
int TinhToan(int& n, int& hc)
{
	hc = (n/10) % 10;
	return hc;
}
void Xuat(int& n, int& hc)
{
	cout << "Dap an la: " << TinhToan(n, hc);
}
int main()
{
	int n, hc;
	Nhap(n);
	Xuat(n, hc);
}