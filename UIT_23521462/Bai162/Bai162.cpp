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
	int t = n;
	int dv;
	int hc;
	while (t >= 10)
	{
		dv = t % 10;
		hc = (t / 10) % 10;
		if (hc < dv)
			flag = 0;
		t = t / 10;
	}
	if (flag == 1)
		return 1;
	else
		return 0;
}
void Xuat(int& n) {
	if (TinhToan(n) == 1)
		cout << "Giam";
	if (TinhToan(n) == 0)
		cout << "Ko Giam";
}
int main()
{
	int n;
	Nhap(n);
	Xuat(n);
}