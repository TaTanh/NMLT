#include <iostream>
#include < cmath>
using namespace std;

void Nhap(float& r)
{
    cout << "Nhap ban kinh: ";
    cin >> r;
}
float KhoangCach(float r)
{
    return 4./3 * 3.14 * r * r*r;
}
void Xuat(float r) {
    cout << "The tich la: " << KhoangCach(r);
}
int main()
{
    float r;
    Nhap(r);
    Xuat(r);
}
