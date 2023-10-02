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
	int dem = 0;
	int i = 1;
	while (i <= n)
	{
		if (n % i == 0)
			dem = dem + 1;
		i = i + 1;
	}
	if (dem==2)
		return 1;
	else
		return 0;
}
void Xuat(int& n) {
	if (TinhToan(n) == 1)
		cout << "NT";
	if (TinhToan(n) == 0)
		cout << "ko NT";
}
int main()
{
	int n;
	Nhap(n);
	Xuat(n);
}