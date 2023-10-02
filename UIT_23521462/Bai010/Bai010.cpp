#include <iostream>
#include <cmath>
using namespace std;

void Nhap(float& x1, float& y1, float& x2, float& y2, float& x3, float& y3)
{
    cout << "Nhap du lieu: ";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
}
float TinhToan(float x1, float y1, float x2, float y2, float x3, float y3)
{
    float a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    float b = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
    float c = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
    return a + b + c;
}
void Xuat(float x1, float y1, float x2, float y2, float x3, float y3) {
    cout << "Dap an la: " << TinhToan(x1,  y1,  x2,  y2,  x3,  y3);
}
int main()
{
    float x1, y1, x2, y2, x3, y3;
    Nhap(x1, y1, x2, y2, x3, y3);
    Xuat(x1, y1, x2, y2, x3, y3);
}
