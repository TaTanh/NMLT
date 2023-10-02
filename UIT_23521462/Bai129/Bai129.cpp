#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void Nhap(float& a, float& b, float& c)
{
	cout << "Nhap du lieu: ";
	cin >> a >> b>>c;
}
void TinhToan(float& a, float& b, float& c)
{
	float temp;
	if (a > b) {
		temp = a;
		a = b;
		b = temp;
	}
	if (a > c) {
		temp = a;
		a = c;
		c = temp;
	}
	if (b > c) {
		temp = b;
		b = c;
		c = temp;
	}
	cout << "Dap an la: " << a << ", " << b << ", " << c;
}
int main()
{
	float a, b,c;
	Nhap(a, b,c);
	TinhToan(a, b,c);
}