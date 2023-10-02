#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void Nhap(float& n)
{
	cout << "Nhap du lieu: ";
	cin >> n;
}
void TinhToan(float& n)
{
	float s = 0;
	int i = 1;
	while (i <= n) {
		s = s + 1. / float(i);
		cout<< s;
		i = i + 1;
	}
}
int main()
{
	float n;
	Nhap(n);
	TinhToan(n);
}