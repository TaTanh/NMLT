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
	int i = 1;
	while (i < n)
	{
		if (n % i == 0)
			s = s + i;
		i = i + 1;
	}
	if (s == n)
		return 1;
	else
		return 0;
}
void Xuat(int& n) {
	if (TinhToan(n) == 1)
		cout << "HT";
	if (TinhToan(n) == 0)
		cout << "ko HT";
}
int main()
{
	int n;
	Nhap(n);
	Xuat(n);
}