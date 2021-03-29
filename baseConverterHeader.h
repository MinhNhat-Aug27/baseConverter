#pragma once
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// chỉ có hệ nhị phân là không có dấu (-)
class baseConverter {					// chuyển qua trung gian là thập phân
private:
	string input = "";						// chuỗi ng dùng nhập 
	int base = 0;

	char getChar(int number);			// chuyển số sang ký tự 
	long long int toDecimal();
	bool inputCheck();					// kiểm tra định dạng chuỗi
	bool baseCheck();					// kiểm tra định dạng số
					// trung gian qua thập phân
	
	int getNum(char ch);				// chuyển ký tự sang số
	void flipBit(string& seq);			// biểu diễn số âm hệ nhị phân ( bù 1 )

public:
	
	void nhap();					// nhập input với base
	void xuat();						// xuất kết quả

	
	void DecimalToBase(int base2);		// từ thập phân sang base ng dùng yêu cầu


};