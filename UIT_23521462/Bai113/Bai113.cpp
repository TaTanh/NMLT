#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void Nhap(float& n)
{
	cout << "Nhap du lieu: ";
	cin >> n;
}
float TinhToan(float& n,float& ahh)
{
	int at = 2;
	int i = 2;
	if (n >= 2) {
		while (i <= n)
		{
			ahh = at + 2 * i + 1;
			i = i + 1;
			at = ahh;
		}
		return ahh;
	}
	else
		return 2;
}
void Xuat(float& n,float& ahh) {
		cout << "Dap an la: " << TinhToan(n,ahh);
}
int main()
{
	float n,ahh;
	Nhap(n);
	Xuat(n,ahh);
}