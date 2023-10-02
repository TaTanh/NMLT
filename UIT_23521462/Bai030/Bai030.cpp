#include <iostream>
#include <cmath>
using namespace std;
void Nhap(float& n)
{
	cout << "Nhap du lieu: ";
	cin >> n;
}
float TinhToan(float& n, float& s, float& i)
{
	s = 0;
	i = 2;
	while (i <= 2*n)
	{
		s = s + (1. / i);
		i = i + 2;
	}
	return s;
}
void Xuat(float& n, float& s, float& i) {
	cout << "Dap an la: " << TinhToan(n, s, i);
}
int main()
{
	float n, s, i;
	Nhap(n);
	Xuat(n, s, i);
}