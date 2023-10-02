#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
float TinhToan(float& x)
{
	float s = 1;
	float m = 1;
	float e = 1;
	int i = 1;
	while (e >= pow(10, -6))
	{
		m = m * i;
		e = 1. / m;
		s = s + e;
		i = i + 1;
	}
	return s;
}
void Xuat(float& x) {
	cout << "Dap an la: " << TinhToan(x);
}
int main()
{
	float x;
	Xuat(x);
}