#include"baseConverterHeader.h"
bool baseConverter::inputCheck() {
	int begin =0;
	if (input[0] == '-')
	{
		if (input.length() >= 2)
			begin = 1;
		else return false;
	}
	for (begin; begin < input.length(); begin++)
	{
		if ((input[begin] >= '0' && input[begin] <= '9') || (input[begin] >= 'A' && input[begin] <= 'Z'))
			continue;
		else return false;
	}
	return true;
}
char baseConverter::getChar(int  number) {
	if (number >= 10)
		return (char)(number + 55);
	return (char)(number + '0');
}
int baseConverter::getNum(char ch) {
	if (ch >= 'A')
		return (int)ch - 55;
	return (int)ch - '0';
}
bool baseConverter::baseCheck() {
	
	int len = input.length();
	for (int i = 0; i < len; i++)
	{
		if (base<=getNum(input[i]))
			return false;
	}
	return true;
}
long long int baseConverter::toDecimal() {
	int begin = 0;
	if (input[0] == '-')
		begin = 1;
	double result = 0;
	for (begin; begin < input.length(); begin++)
	{
		result += getNum(input[begin]) * pow(base, input.length() - begin - 1);
	}
	return result;
}
void baseConverter::DecimalToBase(int base2) {
	
	char* res = new char[50];
	long long int temp_dec = toDecimal();
	int cur_pos = 0;
	do {
		long int temp = temp_dec % base2;
		temp_dec /= base2;
		res[cur_pos] = getChar(temp);
		cur_pos++;

	} while (temp_dec != 0);
	res[cur_pos] = '\0';
	char* res1 = new char[cur_pos + 1];
	for (int i = cur_pos - 1; i >= 0; i--)
	{
		res1[cur_pos - i - 1] = res[i];
	}
	res1[cur_pos] = '\0';
	cout << "\nSau khi chuyen " << input << " tu base " << base << " sang base "<< base2 << " la: "<< res1 << "\t";
	delete[] res;
	delete[] res1;
}

void baseConverter::nhap() {
	do {
		cout << "Moi nhap chuoi: ";
		getline(cin, input);
	} while (!inputCheck());
	do {
		cout << "\nMoi nhap co so: ";
		cin >> base;
	} while (!baseCheck());
}
void baseConverter::xuat() {
	cout << "\nBase " << base << ": \t" << input;
}
void baseConverter::flipBit(string& seq)
{
	for (int i = 0; i < seq.length(); i++)
	{
		if (seq[i] == '1')
			seq[i] = '0';
		else
		{
			seq[i] = '1';
		}
	}
}
