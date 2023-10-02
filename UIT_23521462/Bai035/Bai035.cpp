#include <iostream>
#include <cmath>
using namespace std;
void Nhap(float& n)
{
	cout << "Nhap du lieu: ";
	cin >> n;
}
double TinhToan(float& n, double& t, float& i)
{
	t = 1;
	i = 1;
	while (i <= n)
	{
		t = t * i;
		i = i + 1;
	}
	return t;
}
void Xuat(float& n, double& t, float& i) {
	cout << "Dap an la: " << TinhToan(n, t, i);
}
int main()
{
	float n, i;
	double t;
	Nhap(n);
	Xuat(n, t, i);
}