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
	i = 1;
	while (i <= n)
	{
		s = s + i / (i + 1);
		i = i + 1;
	}
	return float(s);
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