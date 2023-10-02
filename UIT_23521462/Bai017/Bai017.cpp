#include <iostream>
#include <cmath>
using namespace std;
void Nhap(float& x)
{
	cout << "Nhap du lieu: ";
	cin >> x;
}
float TinhToan(float x, float& x2, float& x4, float& x8, float& x10, float& x11)
{
	x2 = x * x;
	x4 = x2 * x2;
	x8 = x4 * x4;
	x10 = x8 * x2;
	x11 = x10 * x;
	return x11;
}
void Xuat(float x, float& x2, float& x4, float& x8, float& x10, float& x11)
{
	cout << "Dap an la: " << TinhToan(x, x2, x4, x8, x10,x11);
}
int main()
{
	float x, x2, x4, x8, x10,x11;
	Nhap(x);
	Xuat(x, x2, x4, x8, x10,x11);

}