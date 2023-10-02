#include <iostream>
#include <cmath>
using namespace std;
void Nhap(int& n)
{
	cout << "Nhap du lieu: ";
	cin >> n;
}
int TinhToan(int& n, int& i, int& dem)
{
	i = 2;
	dem = 0;
	while (i <= n)
	{
		if (n % i == 0)
			dem = dem + 1;
		i = i + 2;
	}
	return dem;
}
void Xuat(int& n, int& i, int& dem) {
	cout << "Dap an la: " << TinhToan(n, i, dem);
}
int main()
{
	int n, i, dem;
	Nhap(n);
	Xuat(n, i, dem);
}