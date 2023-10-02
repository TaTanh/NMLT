#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void Nhap(float& xA, float& yA, float& xB, float& yB, float& xC, float& yC, float& xM, float& yM)
{
	cout << "Nhap du lieu: ";
	cin >> xA >> yA >> xB >> yB >> xC >> yC >> xM >> yM;
}
float TinhToan(float& xA, float& yA, float& xB, float& yB, float& xC, float& yC, float& xM, float& yM)
{
	float SABC = abs(xA * yB + xB*yC + xC*yA - xB*yA - xC*yB - xA*yC) / 2;
	float SMAB = abs(xA * yB + xB*yM + xM*yA - xB*yA - xM*yB - xA*yM) / 2;
	float SMBC = abs(xM * yB + xB*yC + xC*yM - xB*yM - xC*yB - xM*yC) / 2;
	float SMAC = abs(xA * yM + xM*yC + xC*yA - xM*yA - xC*yM - xA*yC) / 2;
	float S = SMAB + SMBC + SMAC;
	if (S==SABC)
		return 1;
	else
		return 0;
}
void Xuat(float& xA, float& yA, float& xB, float& yB, float& xC, float& yC, float& xM, float& yM) {
	if (TinhToan(xA, yA, xB, yB, xC, yC, xM, yM) == 1)
		cout << "La tam giac";
	else
		cout << "Ko la tam giac";
}
int main()
{
	float xA, yA, xB, yB, xC, yC, xM, yM;
	Nhap(xA, yA, xB, yB, xC, yC, xM, yM);
	Xuat(xA, yA, xB, yB, xC, yC, xM, yM);
}