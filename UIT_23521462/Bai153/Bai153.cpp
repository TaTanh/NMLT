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
	while (t > 1) {
		int du = t % 5;
		if (du != 0)
			flag = 0;
		t = t / 5;
	}
	if (flag == 1)
		return 1;
	else
		return 0;
}
void Xuat(int& n) {
	if (TinhToan(n) == 1)
		cout << "La dang";
	if (TinhToan(n) == 0)
		cout << "Ko la dang";
}
int main()
{
	int n;
	Nhap(n);
	Xuat(n);
}