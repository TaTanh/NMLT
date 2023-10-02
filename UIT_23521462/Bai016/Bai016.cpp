#include <iostream>
#include <cmath>
using namespace std;
void Nhap(float& x)
{
	cout << "Nhap du lieu: ";
	cin >> x;
}
float TinhToan(float x, float& x2, float& x4, float& x8, float& x9)
{
	x2 = x * x;
	x4 = x2 * x2;
	x8 = x4 * x4;
	x9 = x8 * x;
	return x9;
}
void Xuat(float x, float& x2, float& x4, float& x8, float& x9)
{
	cout << "Dap an la: " << TinhToan(x, x2, x4, x8,x9);
}
int main()
{
	float x, x2, x4, x8,x9;
	Nhap(x);
	Xuat(x, x2, x4, x8,x9);

}