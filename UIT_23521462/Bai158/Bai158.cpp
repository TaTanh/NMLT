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
	int lc = n % 10;
	int dem = 0;
	int t = n;
	int dv;
	while (t != 0)
	{
		dv = t % 10;
		if (dv > lc)
			lc = dv;
		t = t / 10;
	}
	t = n;
	while (t != 0) {
		dv = t % 10;
		if (dv == lc)
			dem = dem + 1;
		t = t / 10;
	}
	return dem;
}
void Xuat(int& n) {
	cout << TinhToan(n);
}
int main()
{
	int n;
	Nhap(n);
	Xuat(n);
}