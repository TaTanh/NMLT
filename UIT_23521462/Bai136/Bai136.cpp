#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void Nhap(int& x, int& y)
{
    cout << "Nhap du lieu: ";
    cin >> x>>y;
}
void TinhToan(int& x, int& y)
{
	int res = x / 4;
	res = res * 4;
	res = res + 4;
	if (x % 4 == 0)
		cout << x << " ";
	while (res <= y)
	{
		cout << res << " ";
		res = res + 4;
	}
}
int main()
{
    int x,y;
    Nhap(x,y);
	TinhToan(x, y);
}