#include <iostream>
#include < cmath>
using namespace std;

void Nhap(float& x1, float& y1, float& x2, float& y2)
{
    cout << "Nhap diem thu nhat: ";
    cin >> x1 >> y1;
    cout << "Nhap diem thu hai: ";
    cin >> x2 >> y2;
}
float KhoangCach(float x1, float y1, float x2, float y2)
{
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}
void Xuat(float x1, float y1, float x2, float y2) {
    cout <<"Khoang cach la: " << KhoangCach(x1, y1, x2, y2);
}
int main()
{
    float x1, y1, x2, y2;
    Nhap(x1, y1, x2, y2);
    Xuat(x1, y1, x2, y2);
}
