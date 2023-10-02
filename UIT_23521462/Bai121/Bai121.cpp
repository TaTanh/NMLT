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
	float att =1;
	float at = 1;
	int i = 2;
	while (i <= n)
	{
		ahh = (at+att);
		i = i + 1;
		att = at;
		at = ahh;
	}
	return ahh;
}
void Xuat(float& n, float& ahh) {
	if (n >= 2)
		cout << "Dap an la: " << TinhToan(n, ahh);
	else
		cout << "Dap an la: " << 1;
}
int main()
{
	float n, ahh;
	Nhap(n);
	Xuat(n, ahh);
}