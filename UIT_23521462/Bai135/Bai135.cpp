#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void Nhap(int& x)
{
	cout << "Nhap du lieu: ";
	cin >> x;
}
int TinhToan(int& x)
{
    if (x % 4 == 0)
    {
        if (x % 100 == 0)
        {
            if (x % 400 == 0)
                return 1;
            else
                return 2;
        }
        else
            return 1;
    }
}
void Xuat(int& x) {
	if (TinhToan(x) == 1)
		cout << "la nam nhuan";
	if (TinhToan(x) == 2)
		cout << "khong phai la nam nhuan";
}
int main()
{
	int x;
	Nhap(x);
	Xuat(x);
}