#include <iostream>
#include <cmath>
using namespace std;
void Nhap(float& n, float& x)
{
	cout << "Nhap du lieu: ";
	cin >> x >> n;
}
float TinhToan(float& n, float& t, float& i,float& x)
{
	t = 1;
	i = 1;
	while (i <= n)
	{
		t = t * x;
		i = i + 1;
	}
	return t;
}
void Xuat(float& n, float& t, float& i,float& x) {
	cout << "Dap an la: " << TinhToan(n, t, i,x);
}
int main()
{
	float n, t, i,x;
	Nhap(n,x);
	Xuat(n, t, i,x);
}