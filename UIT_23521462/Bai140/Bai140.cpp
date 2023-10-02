#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void Nhap(float& a, float& b, float& c)
{
    cout << "Nhap du lieu: ";
    cin >> a >> b >> c;
}
void TinhToan(float& a, float& b, float& c)
{
    float x, x1, x2;
    float denta = pow(b, 2) - 4 * a * c;
    if (denta <= 0) {
        if (denta == 0) {
            x = (-b) / 2 * a;
            cout << x;
        }
        else
            cout << "VN";
    }
    else {
        x1 = (-b + sqrt(denta)) / 2 * a;
        x2 = (-b - sqrt(denta)) / 2 * a;
        cout << "Cac nghiem la: " << x1 << ", " << x2;
    }

}

int main()
{
    float a, b,c;
    Nhap(a, b,c);
    TinhToan(a, b, c);
}