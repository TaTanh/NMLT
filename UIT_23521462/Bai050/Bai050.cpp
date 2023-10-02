#include <iostream>
#include <cmath>
using namespace std;
void Nhap(int& n)
{
	cout << "Nhap du lieu: ";
	cin >> n;
}
int TinhToan(int& n, int& i,int& s)
{
	i = 1;
	s = 0;
	while (i <= n)
	{
		if (n % i == 0)
			s = s + i;
		i = i + 1;
	}
	return s;
}
void Xuat(int& n, int& i,int& s) {
	cout << "Dap an la: " << TinhToan(n, i,s);
}
int main()
{
	int n,i,s;
	Nhap(n);
	Xuat(n, i, s);
}