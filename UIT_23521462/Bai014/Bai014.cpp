#include <iostream>
#include <cmath>
using namespace std;
void Nhap(float& x)
{
	cout << "Nhap du lieu: ";
	cin >> x;
}
float TinhToan(float x, float& x2, float& x4, float& x8, float& x16, float& x32)
{
	x2 = x * x;
	x4 = x2 * x2;
	x8 = x4 * x4;
	x16 = x8 * x8;
	x32 = x16 * x16;
	return x32;
}
void Xuat(float x, float& x2, float& x4, float& x8, float& x16,float& x32)
{
	cout << "Dap an la: " << TinhToan(x, x2, x4, x8, x16,x32);
}
int main()
{
	float x, x2, x4, x8, x16,x32;
	Nhap(x);
	Xuat(x, x2, x4, x8, x16,x32);

}