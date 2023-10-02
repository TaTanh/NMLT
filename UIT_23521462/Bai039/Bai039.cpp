#include <iostream>
#include <cmath>
using namespace std;
void Nhap(float& n)
{
	cout << "Nhap du lieu: ";
	cin >> n;
}
float TinhToan(float& n, float& t, float& i)
{
	t = 1;
	i = 1;
	while (i <= n)
	{
		t = t * (1 + 1. / (pow(i, 2)));
		i = i + 1;
	}
	return t;
}
void Xuat(float& n, float& t, float& i) {
	cout << "Dap an la: " << TinhToan(n, t, i);
}
int main()
{
	float n, t, i;
	Nhap(n);
	Xuat(n, t, i);
}