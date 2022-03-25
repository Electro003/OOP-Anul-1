#include "Number.h"

int Number::fromCharToInt(char * string)
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
	this->value = new char [strlen(value)+1];
	this->value = (char*)value;
	if (base <= 16 && base >= 2)
		this->base = base;
	else
		this->base = 10;
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
	this->base = n.base;
}

Number::~Number()
{
}

int Number::operator[](int i)
{
	if (i == 0)
		return this->base;
	else if (i == 1)
		return fromCharToInt(this->value);
	return -1;
}

int Number::operator>=(Number n2)
{
	if (fromCharToInt(this->value) >= fromCharToInt(n2.value))
		return fromCharToInt(this->value);
	return 0;
}

int Number::operator>(Number n2)
{
	if (fromCharToInt(this->value) > fromCharToInt(n2.value))
		return fromCharToInt(this->value);
	return 0;
}

int Number::operator<=(Number n2)
{
	if (fromCharToInt(this->value) <= fromCharToInt(n2.value))
		return fromCharToInt(this->value);
	return 0;
}

int Number::operator<(Number n2)
{
	if (fromCharToInt(this->value) < fromCharToInt(n2.value))
		return fromCharToInt(this->value);
	return 0;
}

bool Number::operator==(Number n2)
{
	if (fromCharToInt(this->value) == fromCharToInt(n2.value))
		return true;
	return false;
}

Number& Number::operator--()
{
	this->value = this->value + 1;
	return (*this);
}

//Number Number::operator--(int)
//{
//	char* aux = this->value;
//	aux[strlen(aux) - 1] = '\0';
//	Number tempObj(aux, 10);
//	return (tempObj);
//}

int Number::GetValue()
{
	return fromCharToInt(this->value);
}

void Number::SwitchBase(int newBase)
{
	int nr_aux=0;
	int p = pow(10, strlen(this->value)-1);
	for (int i = 0; i < strlen(this->value); i++)
	{
		nr_aux += p * (this->value[i] - '0');
		p /= 10;
	}
	
	
}

void Number::Print()
{
	cout << this->value << " " << this->base << endl;

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
	return n1.GetValue()+n2.GetValue();
}

int operator-(Number& n1, Number& n2)
{
	return n1.GetValue()+n2.GetValue();
}
