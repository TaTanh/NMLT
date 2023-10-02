#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void Nhap(int& n, int& k)
{
	cout << "Nhap du lieu: ";
	cin >> k >> n;
}
float TinhToan(int& n, int& k)
{
	float s = 0;
	int i = 1;
	while (i <= n)
	{
		s = s + pow(i, k);
		i = i + 1;
	}
	return s;
}
void Xuat(int& n, int& k) {
	cout << "Dap an la: " << TinhToan(n, k);
}
int main()
{
	int n, k;
	Nhap(n, k);
	Xuat(n, k);
}