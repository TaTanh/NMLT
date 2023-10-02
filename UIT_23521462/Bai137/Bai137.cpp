#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void Nhap(int& x)
{
    cout << "Nhap du lieu: ";
    cin >> x;
}
int TinhToan(int& x)
{
    int f;
    if (x >= 5)
        f = 2 * x * x + 5 * x + 9;
    else
        f = (-2) * x * x + 4 * x - 9;
    return f;
}
void Xuat(int& x) {
    cout << "Dap an la: " << TinhToan(x);
}
int main()
{
    int x;
    Nhap(x);
    Xuat(x);
}