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
	int ahh = n;
	if (ahh != 1)
	{
		if (ahh % 2 == 0)
			ahh = ahh / 2;
		else
			ahh = 3 * ahh + 1;
		cout << ahh;
	}
	return 0;
}

int main()
{
	int n;
	Nhap(n);
	TinhToan(n);
}