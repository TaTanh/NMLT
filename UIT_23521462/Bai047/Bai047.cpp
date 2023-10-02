#include <iostream>
#include <cmath>
using namespace std;
void Nhap(float& n)
{
	cout << "Nhap du lieu: ";
	cin >> n;
}
float TinhToan(float& n, double& s, double& i)
{
	s = 0;
	i = 1;
	while (i <= n)
	{
		s = s + (sqrt(1 + 1. / (i * i) + 1. / ((i + 1) * (i + 1))));
		i = i + 1;
	}
	return float(s);
}
void Xuat(float& n, double& s, double& i) {
	cout << "Dap an la: " << TinhToan(n, s, i);
}
int main()
{
	float n;
	double s,i;
	Nhap(n);
	Xuat(n, s, i);
}