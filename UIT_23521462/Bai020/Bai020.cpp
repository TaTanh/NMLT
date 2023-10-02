#include <iostream>
#include <cmath>
using namespace std;
void Nhap(float& x)
{
	cout << "Nhap du lieu: ";
	cin >> x;
}
float TinhToan(float x, float& x2, float& x4, float& x8, float& x12, float& x14)
{
	x2 = x * x;
	x4 = x2 * x2;
	x8 = x4 * x4;
	x12 = x8 * x4;
	x14 = x12 * x2;
	return x14;
}
void Xuat(float x, float& x2, float& x4, float& x8, float& x12, float& x14)
{
	cout << "Dap an la: " << TinhToan(x, x2, x4, x8, x12, x14);
}
int main()
{
	float x, x2, x4, x8, x12, x14;
	Nhap(x);
	Xuat(x, x2, x4, x8, x12, x14);

}