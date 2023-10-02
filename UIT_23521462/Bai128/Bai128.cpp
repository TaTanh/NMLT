#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void Nhap(float& a, float& b)
{
	cout << "Nhap du lieu: ";
	cin >> a >> b;
}
void TinhToan(float& a, float& b)
{
	float temp;
	if (a > b) {
		temp = a;
		a = b;
		b = temp;
		cout << "Dap an la: " << a << ", " << b;
	}
	else
		cout << "Dap an la: " << a << ", " << b;
}

int main()
{
	float a, b;
	Nhap(a, b);
	TinhToan(a, b);
}