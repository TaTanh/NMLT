#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void Nhap(float& x, float& y, float& z)
{
	cout << "Nhap du lieu: ";
	cin >> x >> y >> z;
}
float TinhToan(float& x, float& y, float& z)
{
	if (x + y > z && x + z > y && y + z > x)
	{
		if (x == y && y == z)
			return 1;
		else {
			if ((x * x == y * y + z * z) || (x * x + y * y == z * z) || (x * x + z * z == y * y))
			{
				if ((x == y) || (y == z) || (z == x))
					return 2;
				else
					return 3;
			}
			else
			{
				if ((x == y) || (y == z) || (z == x))
					return 4;
				else
					return 5;
			}
		}
	}
	else
		return 6;
}
void Xuat(float& x, float& y, float& z) {
	if (TinhToan(x, y, z) == 1)
		cout << "Deu";
	if (TinhToan(x, y, z) == 2)
		cout << "Vuong can";
	if (TinhToan(x, y, z) == 3)
		cout << "Vuong";
	if (TinhToan(x, y, z) == 4)
		cout << "Can";
	if (TinhToan(x, y, z) == 5)
		cout << "Thuong";
	if (TinhToan(x,y,z)==6)
		cout << "Ko la tam giac";
}
int main()
{
	float x, y, z;
	Nhap(x, y, z);
	Xuat(x, y, z);
}