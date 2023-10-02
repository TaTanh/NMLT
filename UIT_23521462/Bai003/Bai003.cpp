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
    return 2*3.14 * r ;
}
void Xuat(float r) {
    cout << "Chu vi la: "<<KhoangCach(r);
}
int main()
{
    float r;
    Nhap(r);
    Xuat(r);
}
