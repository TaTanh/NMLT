#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void Nhap(float& n)
{
	cout << "Nhap du lieu: ";
	cin >> n;
}
void TinhToan(float& n, float& ahh, float& bhh)
{
	float bt = 1;
	float at = 1;
	int i = 2;
	if (n >=2) {
		while (i <= n)
		{
			ahh = (3 * bt + 2 * at);
			bhh = at + 3 * bt;
			i = i + 1;
			bt = bhh;
			at = ahh;
		}
		cout << "Dap an la: " << ahh << ", " << bhh;
	}
	else
		cout << "Dap an la: " << 1 << ", " << 1;
}

int main()
{
	float n,bhh, ahh;
	Nhap(n);
	TinhToan(n, ahh,bhh);
}