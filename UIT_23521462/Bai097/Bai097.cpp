#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void Nhap(float& n, float& x)
{
	cout << "Nhap du lieu: ";
	cin >>x>> n;
}
float TinhToan(float& n, float& x)
{
	float s = 0;
	int t = 1;
	int i = 1;
	while (i <= n)
	{
		t = t * x;
		s = sqrt(t + s);
		i = i + 1;
	}
	return s;
}
void Xuat(float& n, float& x) {
	cout << "Dap an la: " << TinhToan(n,x);
}
int main()
{
	float n,x;
	Nhap(n,x);
	Xuat(n,x);
}