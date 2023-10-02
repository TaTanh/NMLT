#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void Nhap(float& n)
{
	cout << "Nhap du lieu: ";
	cin >> n;
}
float TinhToan(float& n, float& ahh)
{
	int at = -2;
	int tt = 3;
	int pp = 7;
	int i = 2;
	if (n >= 2) {
		while (i <= n)
		{
			tt = tt * 3;
			pp = pp * 7;
			ahh = 5 * at + 2 * tt - 6 * pp + 12;
			i = i + 1;
			at = ahh;
		}
		return ahh;
	}
	else
		return -2;
}
void Xuat(float& n, float& ahh) {
	cout << "Dap an la: " << TinhToan(n, ahh);
}
int main()
{
	float n, ahh;
	Nhap(n);
	Xuat(n, ahh);
}