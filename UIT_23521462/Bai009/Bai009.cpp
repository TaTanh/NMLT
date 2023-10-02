#include <iostream>
#include <cmath>
using namespace std;

void Nhap(float& r, float& n)
{
    cout << "Nhap du lieu: ";
    cin >> r >> n;
}
float TinhToan(float r, float n)
{
    return 1./2 * n * r*r * sin(2*  3.14 / n);
}
void Xuat(float r, float n) {
    cout << "Dap an la: " << TinhToan(r, n);
}
int main()
{
    float r, n;
    Nhap(r, n);
    Xuat(r, n);
}
