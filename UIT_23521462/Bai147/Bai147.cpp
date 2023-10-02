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
	int flag=1;
	int t = n;
	int dv;
	while (t != 0)
	{
		dv = t % 10;
		if (dv % 2 == 0)
			flag = 0;
		t = t / 10;
	}
	if (flag==1)
		return 1;
	else
		return 0;
}
void Xuat(int& n) {
	if (TinhToan(n) == 1)
		cout << "TL";
	if (TinhToan(n) == 0)
		cout << "ko TL";
}
int main()
{
	int n;
	Nhap(n);
	Xuat(n);
}