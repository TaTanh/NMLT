#include <iostream>
#include < cmath>
using namespace std;

void Nhap(float& c)
{
    cout << "Nhap nhiet do: ";
    cin >> c;
}
float NhietDo(float c)
{
    return (9. / 5 * c) + 32;
}
void Xuat(float c) {
    cout << "Nhiet do c la: " << NhietDo(c);
}
int main()
{
    float c;
    Nhap(c);
    Xuat(c);
}
