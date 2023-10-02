#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void Nhap(float& a, float& b)
{
	cout << "Nhap du lieu: ";
	cin >> a >> b;
}
void TinhToan(float& a, float& b)
{
	float lc = a;
	if (lc > b) {
		lc = b;
		cout << "Dap an la: " << lc;
	}
	else
		cout << "Dap an la: " << lc;
}

int main()
{
	float a, b;
	Nhap(a, b);
	TinhToan(a, b);
}