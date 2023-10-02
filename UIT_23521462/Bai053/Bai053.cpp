#include <iostream>
#include <cmath>
using namespace std;
void Nhap(int& n)
{
	cout << "Nhap du lieu: ";
	cin >> n;
}
int TinhToan(int& n, int& i)
{
	i = 1;
	while (i <= n)
	{
		if (n % i == 0)
			cout << i << " ";
		i = i + 2;
	}
	return 0;
}
void Xuat(int& n, int& i) {
	cout << "Dap an la: " << TinhToan(n, i);
}
int main()
{
	int n;
	int  i;
	Nhap(n);
	TinhToan(n, i);
}