#include <iostream>
#include <cmath>
using namespace std;
void Nhap(float& x)
{
	cout << "Nhap du lieu: ";
	cin >> x;
}
float TinhToan(float x, float& x2, float& x4,float& x6)
{
	x2 = x * x;
	x4 = x2 * x2;
	x6 = x4 * x2;
	return x6;
}
void Xuat(float x,float& x2,float& x4,float& x6)
{
	cout << "Dap an la: " << TinhToan(x,x2,x4,x6);
}
int main()
{
	float x, x2, x4, x6;
	Nhap(x);
	Xuat(x, x2, x4, x6);

}