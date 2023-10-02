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
	int flag = 0;
	int i = 0;
	while (i <= n)
	{
		if (i*i == n)
			flag= 1;
		i = i + 1;
	}
	if (flag==1)
		return 1;
	else
		return 0;
}
void Xuat(int& n) {
	if (TinhToan(n) == 1)
		cout << "CP";
	if (TinhToan(n) == 0)
		cout << "ko CP";
}
int main()
{
	int n;
	Nhap(n);
	Xuat(n);
}