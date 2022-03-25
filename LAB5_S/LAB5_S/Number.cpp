#include "Number.h"

int Number::fromCharToInt()
{
	int nr_aux = 0;
	int p = pow(10, strlen(this->value) - 1);
	for (int i = 0; i < strlen(this->value); i++)
	{
		nr_aux += p * (this->value[i] - '0');
		p /= 10;
	}
	return nr_aux;
}

Number::Number(const char* value, int base)
{
	this->base = base;
	this->value = (char*)value;
}

Number::Number(const Number& n)
{
	this->value = n.value;
	this->base = n.base;
}

Number::Number(Number&& n)
{
	char* temp = n.value;
	n.value = nullptr;
	this->value = temp;
	this->base = base;
}

Number::~Number()
{
}

void Number::operator[](int i)
{
	if (i == 0)
		cout << this->value;
	if (i == 1)
		cout << this->base;
}

int Number::operator>(Number& n2)
{
	if (this->fromCharToInt() > n2.fromCharToInt())
		return this->fromCharToInt();
	return 0;
}

int Number::operator>=(Number& n2)
{
	if (this->fromCharToInt() >= n2.fromCharToInt())
		return this->fromCharToInt();
	return 0;
}

int Number::operator<(Number& n2)
{
	if (this->fromCharToInt() < n2.fromCharToInt())
		return this->fromCharToInt();
	return 0;
}

int Number::operator<=(Number& n2)
{
	if (this->fromCharToInt() <= n2.fromCharToInt())
		return this->fromCharToInt();
	return 0;
}

bool Number::operator==(Number& n2)
{
	if (this->fromCharToInt() == n2.fromCharToInt())
		return true;
	return false;
}

Number& Number::operator--()
{
	this->value = this->value + 1;
	return (*this);
}
Number& Number::operator--(int)
{
	this->value[strlen(value) - 1] = '\0';
	return (*this);
}

void Number::Print()
{
	cout << this->value << " " << this->base << '\n';
}

int Number::GetDigitsCount()
{
	return strlen(this->value);
}

int Number::GetBase()
{
	return this->base;
}

int operator+(Number& n1, Number& n2)
{
	return n1.fromCharToInt() + n2.fromCharToInt();
}

int operator-(Number& n1, Number& n2)
{
	return n1.fromCharToInt() - n2.fromCharToInt();
}
