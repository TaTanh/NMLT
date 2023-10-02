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
	int s = 0;
	int k = 0;
	while (s+k+1 < n)
	{
		k = k + 1;
		s = s + k;
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