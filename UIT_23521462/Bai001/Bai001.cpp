#include <iostream>
#include <cmath>
using namespace std;
void Nhap(float& x1, float& y1, float& x2, float& y2) {
	cout << "Nhap du lieu: ";
	cin >> x1>> y1>> x2>> y2;
}
float TinhToan(float& x1, float& y1, float& x2, float& y2) {
	float d = sqrt((x2 - x1)*(x2-x1) + (y2 - y1)*(y2-y1));
	return d;
}
void Xuat(float& x1, float& y1, float& x2, float& y2) {
	cout << "Dap an la: " << TinhToan(x1, y1, x2, y2);
}
int main() {
	float x1, y1, x2, y2;
	Nhap(x1, y1, x2, y2);
	Xuat(x1, y1, x2, y2);
}