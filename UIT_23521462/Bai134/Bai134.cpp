#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void Nhap(float& x, float& y, float& z)
{
	cout << "Nhap du lieu: ";
	cin >> x >> y >> z;
}
float TinhToan(float& x, float& y, float& z)
{
	if (x <= y && y <= z)
		return 1;
	else
		return 0;
}
void Xuat(float& x, float& y, float& z) {
	if (TinhToan(x, y, z) == 1)
		cout << "BDT dung";
	if (TinhToan(x, y, z) == 0)
		cout << "BDT sai";
}
int main()
{
	float x, y, z;
	Nhap(x, y, z);
	Xuat(x, y, z);
}