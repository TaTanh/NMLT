#include <iostream>
#include <cmath>
using namespace std;
void Nhap(int& a, int& b)
{
	cout << "Nhap du lieu: ";
	cin >> a >> b;
}
int TinhToan(int& a, int& b)
{
	a = a + b;
	b = a - b;
	a = a - b;
	cout << a << " " << b;
	return 1;
}
int main()
{
	int a, b ;
	Nhap(a, b );
	TinhToan(a, b);
}