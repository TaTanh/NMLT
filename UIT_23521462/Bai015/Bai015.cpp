#include <iostream>
#include <cmath>
using namespace std;
void Nhap(float& x)
{
	cout << "Nhap du lieu: ";
	cin >> x;
}
float TinhToan(float x, float& x2, float& x4, float& x8, float& x16, float& x32, float& x64)
{
	x2 = x * x;
	x4 = x2 * x2;
	x8 = x4 * x4;
	x16 = x8 * x8;
	x32 = x16 * x16;
	x64 = x32 * x32;
	return x64;
}
void Xuat(float x, float& x2, float& x4, float& x8, float& x16, float& x32, float& x64)
{
	cout << "Dap an la: " << TinhToan(x, x2, x4, x8, x16, x32, x64);
}
int main()
{
	float x, x2, x4, x8, x16, x32, x64;
	Nhap(x);
	Xuat(x, x2, x4, x8, x16, x32, x64);

}