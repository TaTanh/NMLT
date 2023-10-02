#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void Nhap(float& n)
{
	cout << "Nhap du lieu: ";
	cin >> n;
}
float TinhToan(float& n)
{
	float s = 0;
	int i = 1;
	while (i <= n)
	{
		s = pow(sqrt(i + s), (i+1));
		i = i + 1;
	}
	return s;
}
void Xuat(float& n) {
	cout << "Dap an la: " << TinhToan(n);
}
int main()
{
	float n;
	Nhap(n);
	Xuat(n);
}