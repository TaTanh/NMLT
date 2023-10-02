#include <iostream>
#include <cmath>
using namespace std;
void Nhap(float& n)
{
	cout << "Nhap du lieu: ";
	cin >> n;
}
float TinhToan(float& n, double& s, float& i)
{
	s = 0;
	i = 1;
	while (i <= n)
	{
		s = s + 1. / (sqrt(i) * (i + 1) + i * sqrt(i + 1));
		i = i + 1;
	}
	return float(s);
}
void Xuat(float& n, double& s, float& i) {
	cout << "Dap an la: " << TinhToan(n, s, i);
}
int main()
{
	float n, i;
	double s;
	Nhap(n);
	Xuat(n, s, i);
}