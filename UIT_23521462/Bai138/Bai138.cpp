#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void Nhap(float& x)
{
    cout << "Nhap du lieu: ";
    cin >> x;
}
float TinhToan(float& x)
{
    float f;
    if (x >= 0) {
        if (x <= 1)
            f = 5 * x - 7;
        else
            f = 2 * pow(x, 3) + 5 * pow(x, 2) - 8 * x + 3;
    }
    else
        f = (-2) * pow(x, 3) + 6 * x + 9;
    return f;
}
void Xuat(float& x) {
    cout << "Dap an la: " << TinhToan(x);
}
int main()
{
    float x;
    Nhap(x);
    Xuat(x);
}