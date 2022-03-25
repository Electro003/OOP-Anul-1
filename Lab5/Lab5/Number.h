#pragma once
#include <iostream>
using namespace std;
class Number
{
	int base;
	char* value;
	int fromCharToInt(char * string);
	// add data members

public:

	Number(const char* value, int base); // where base is between 2 and 16
	Number(const Number& n);
	Number(Number&& n);
	~Number();
	friend int operator+(Number &n1 , Number& n2);
	friend int operator-(Number &n1 , Number& n2);
	int operator[](int i);
	int operator>= (Number n2);
	int operator>(Number n2);
	int operator<=(Number n2);
	int operator<(Number n2);
	bool operator==(Number n2);
	Number& operator--();
	//Number operator--(int);

	int GetValue();

	void SwitchBase(int newBase);

	void Print();

	int  GetDigitsCount(); // returns the number of digits for the current number

	int  GetBase(); // returns the current base
	

};