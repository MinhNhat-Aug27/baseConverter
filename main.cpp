#include"baseConverterHeader.h"
int main() {
	baseConverter b;
	b.nhap();
	b.xuat();
	cout << "\nMoi nhap co so muon chuyen sang: ";
	int base2;
	cin >> base2;
	b.DecimalToBase(base2);
}