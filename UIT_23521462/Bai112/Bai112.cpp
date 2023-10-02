#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float TinhToan(float& x)
{
	float s = 4-2/4-1/5-1/6;
	float t = 1;
	float e = 1;
	int i = 1;
	while (e >= pow(10, -6))
	{
		t = t * 16;
		e = (4./ (8 * i + 1) - 2. / (8 * i + 4) - 1. / (8 * i + 5) - 1. / (8 * i + 6)) / t;
		s = s +  e;
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