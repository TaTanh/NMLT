#include <iostream>
#include <cmath>
using namespace std;
void Nhap(int& n)
{
	cout << "Nhap du lieu: ";
	cin >> n;
}
int TinhToan(int& n)
{
	int dv;
	int t = n;
	int flag = 0;
	while (t != 0)
	{
		dv = t % 10;
		if (dv % 2 != 0)
			flag = 1;
		t = t / 10;
	}
	return flag;
}
void Xuat(int& n) {
	int flag;
	flag = TinhToan(n);
	if (flag == 1)
		cout << "TT";
	else
		cout << "ko TT";
}
int main()
{
	int n;
	Nhap(n);
	Xuat(n);
}