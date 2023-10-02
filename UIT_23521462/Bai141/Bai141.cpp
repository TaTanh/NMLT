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
	int dt = abs(n);
	while (dt >= 10)
	{
		dt = dt / 10;
	}
	return dt;
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