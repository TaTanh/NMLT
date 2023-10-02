#include <iostream>
#include <cmath>
using namespace std;
void Nhap(float& x)
{
	cout << "Nhap du lieu: ";
	cin >> x;
}
float TinhToan(float x, float& x2, float& x4, float& x8, float& x12,float& x13)
{
	x2 = x * x;
	x4 = x2 * x2;
	x8 = x4 * x4;
	x12 = x8 * x4;
	x13 = x12 * x;
	return x13;
}
void Xuat(float x, float& x2, float& x4, float& x8, float& x12,float& x13)
{
	cout << "Dap an la: " << TinhToan(x, x2, x4, x8, x12,x13);
}
int main()
{
	float x, x2, x4, x8, x12,x13;
	Nhap(x);
	Xuat(x, x2, x4, x8, x12,x13);

}