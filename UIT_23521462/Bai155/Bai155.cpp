#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void Nhap(int& n)
{
	cout << "Nhap du lieu: ";
	cin >> n;
}
int TinhToan(int& n)
{
	int t = 1;
	int i = 0;
	while (i <= n)
	{
		t = t * 2;
		cout << t;
		i = i + 1;
	}
	return 0;
}

int main()
{
	int n;
	Nhap(n);
	TinhToan(n);
}