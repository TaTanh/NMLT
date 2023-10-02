#include <iostream>
#include <cmath>
using namespace std;
void Nhap(int& n)
{
	cout << "Nhap du lieu: ";
	cin >> n;
}
int TinhToan(int& n, int& s, int& i)
{
	s = 0;
	i = 1;
	while (i <= n)
	{
		s = s + i;
		i = i + 1;
	}
	return s;
}
void Xuat(int& n, int& s, int& i) {
	cout << "Dap an la: " << TinhToan(n, s, i);
}
int main()
{
	int n,s,i;
	Nhap(n);
	Xuat(n,s,i);
}