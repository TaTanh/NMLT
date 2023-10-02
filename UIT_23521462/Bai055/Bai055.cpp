#include <iostream>
#include <cmath>
using namespace std;
void Nhap(int& n)
{
	cout << "Nhap du lieu: ";
	cin >> n;
}
int TinhToan(int& n, int& i, int& t)
{
	i = 1;
	t = 1;
	while (i <= n)
	{
		if (n % i == 0)
			t = t * i;
		i = i + 2;
	}
	return t;
}
void Xuat(int& n, int& i, int& t) {
	cout << "Dap an la: " << TinhToan(n, i, t);
}
int main()
{
	int n, i, t;
	Nhap(n);
	Xuat(n, i, t);
}