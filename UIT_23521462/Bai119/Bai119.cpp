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
	float at = 2;
	int i = 2;
	while (i <= n)
	{
		ahh = (at*at +2)/(2*at);
		i = i + 1;
		at = ahh;
	}
	return ahh;
}
void Xuat(float& n, float& ahh) {
	if (n == 1)
		cout << "Dap an la 2 ";
	if (n >= 2)
		cout << "Dap an la: " << TinhToan(n, ahh);
}
int main()
{
	float n, ahh;
	Nhap(n);
	Xuat(n, ahh);
}