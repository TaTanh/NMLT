#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void TinhToan(float& a, float& b)
{
    if (a < 0) {
        a = -a;
        if (b < 0) {

            b = -b;
        }

    }
    else
        if (b < 0)
            b = -b;
}

int main()
{
    float a,b;

    cout << "Nhap 2 so: \n";
    cin >> a >> b;

    TinhToan(a,b);
    cout << "\nA la " << a << " B la " << b;

    return 0;
}