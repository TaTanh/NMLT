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
	int flag = 1;
	int dt = n;
	int dem;
	int dv;
	int t;
	while (dt >= 10)
	{
		dt = dt / 10;
	}
	dem = 0;
	t = n;
	while (t != 0) {
		dv = t % 10;
		if (dv == dt)
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