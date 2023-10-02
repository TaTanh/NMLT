#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void Nhap(float& xA, float& yA, float& xB, float& yB, float& xC, float& yC)
{
	cout << "Nhap du lieu: ";
	cin >> xA >> yA >> xB >> yB >> xC >> yC;
}
float TinhToan(float& xA, float& yA, float& xB, float& yB, float& xC, float& yC)
{
	float a = sqrt(pow((xB - xA), 2) + pow((yB - yA), 2));
	float b = sqrt(pow((xC - xA), 2) + pow((yC - yA), 2));
	float c	= sqrt(pow((xC - xB), 2) + pow((yC - yB), 2));
	if (a + b > c && a + c > b && b + c > a)
		return 1;
	else
		return 0;
}
void Xuat(float& xA, float& yA, float& xB, float& yB, float& xC, float& yC) {
	if (TinhToan(xA, yA, xB, yB, xC, yC) == 1)
		cout << "La tam giac";
	else
		cout << "Ko la tam giac";
}
int main()
{
	float xA, yA, xB, yB, xC, yC;
	Nhap(xA, yA, xB, yB, xC, yC);
	Xuat(xA, yA, xB, yB, xC, yC);
}