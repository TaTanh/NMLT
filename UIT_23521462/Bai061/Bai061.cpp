#include <iostream>
#include <cmath>
using namespace std;
void Nhap(int& n)
{
	cout << "Nhap du lieu: ";
	cin >> n;
}
int TinhToan(int& n, int& t, int& dem,int& dv)
{
	t = n;
	dem = 0;
	while (t != 0)
	{
		dv = t % 10;
		if (dv % 2 != 0)
			dem = dem + 1;
		t = t / 10;
	}
	return dem;
}
void Xuat(int& n, int& t, int& dem, int& dv) {
	cout << "Dap an la: " << TinhToan(n, t, dem,dv);
}
int main()
{
	int n, t, dem,dv;
	Nhap(n);
	Xuat(n, t, dem,dv);
}