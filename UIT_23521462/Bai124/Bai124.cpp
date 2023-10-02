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
	float at = 2;
	int i = 2;
	if (n >= 2) {
		while (i <= n)
		{
			ahh = at * at + 2 * bt * bt;
			bhh = 2 * at * bt;
			i = i + 1;
			bt = bhh;
			at = ahh;
		}
		cout << "Dap an la: " << ahh << ", " << bhh;
	}
	else
		cout << "Dap an la: " << 2 << ", " << 1;
}

int main()
{
	float n, bhh, ahh;
	Nhap(n);
	TinhToan(n, ahh, bhh);
}