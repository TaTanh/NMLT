#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void Nhap(float& a, float& b)
{
    cout << "Nhap du lieu: ";
    cin >> a >> b;
}
float TinhToan(float& a, float& b)
{
    float x;
    if (a == 0) {
        if (b == 0)
            return 1;
        else
            return 0;
    }
    else{
        x = (-b) / a;
        return x;
    }

}

void Xuat(float& a,float& b) {
    if (TinhToan(a, b) == 1)
        cout << "VSN";
    if (TinhToan(a, b) == 0)
        cout << "VN";
    if (TinhToan(a, b) != 1 && TinhToan(a, b) != 0)
        cout << "Dap an la: " << TinhToan(a, b);
}
int main()
{
    float a,b;
    Nhap(a,b);
    Xuat(a,b);
}