#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
float TinhToan(float& n)
{
	float s = 0;
	float e = 0.5;
	int i = 1;
	while (e >= pow(10, -6))
	{
		e = 1. /( i*(i+1));
		s = s + e;
		i = i + 1;
	}
	return s;
}
void Xuat(float& n) {
	cout << "Dap an la: " << TinhToan(n);
}
int main()
{
	float n;
	Xuat(n);
}