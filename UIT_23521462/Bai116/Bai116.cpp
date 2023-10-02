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
	int att = 1;
	int at = 2;
	int i = 2;
	while (i <= n)
	{
		ahh = 4 * at +  att;
		i = i + 1;
		att = at;
		at = ahh;
	}
	return ahh;
}
void Xuat(float& n, float& ahh) {
	if (n == 1)
		cout << "Dap an la 2 ";
	if (n == 0)
		cout << "Dap an la 1 ";
	if (n>=2)
		cout << "Dap an la: " << TinhToan(n, ahh);
}
int main()
{
	float n, ahh;
	Nhap(n);
	Xuat(n, ahh);
}