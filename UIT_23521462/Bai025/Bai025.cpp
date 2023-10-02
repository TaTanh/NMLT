#include <iostream>
#include <cmath>
using namespace std;
void Nhap(int& a, int& b, int& temp)
{
	cout << "Nhap du lieu: ";
	cin >> a >> b;
}
int TinhToan(int& a, int& b, int& temp)
{	
	temp = a;
	a = b;
	b = temp;
	cout << a << " " << b;
	return 1;
}
int main()
{
	int a, b, temp;
	Nhap(a,b,temp);
	TinhToan(a, b, temp);
}