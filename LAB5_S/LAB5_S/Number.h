#pragma once
#include <iostream>
using namespace std;
class Number

{
	char* value;
	int base;
	int fromCharToInt();
	// add data members

public:

	Number(const char* value, int base); // where base is between 2 and 16
	Number(const Number& n);
	Number(Number&& n);
	~Number();
	friend int operator+ (Number& n1, Number& n2);
	friend int operator- (Number& n1, Number& n2);
	void operator[](int i);
	int operator>(Number& n2);
	int operator>=(Number& n2);
	int operator<(Number& n2);
	int operator<=(Number& n2);
	bool operator==(Number& n2);
	Number& operator--();
	Number& operator--(int);


	// add operators and copy/move constructor


	void SwitchBase(int newBase);

	void Print();

	int  GetDigitsCount(); // returns the number of digits for the current number

	int  GetBase(); // returns the current base
};