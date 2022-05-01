#include "Calculator.h"

Calculator::Calculator()
{
	this->operatii = new Calculator[10];
	this->count = 0;
}

void Calculator::setX(int x)
{
	this->x = x;

}

void Calculator::setY(int y)
{
	this->y = y;
}

int Calculator::getX()
{
	return this->x;
}

int Calculator::getY()
{
	return this->y;
}

char* Calculator::getName()
{
	return this->name;
}

Calculator& Calculator::operator+=(const Calculator* operatie)
{
	if (this->count != 0)
	{
		for (int i = 0; i < this->count; i++)
		{
			if (strcmp(operatie->name, this->operatii[i].getName()) != 0)
			{
				this->operatii[this->count]  = *operatie;
				this->count++;
				break;
			}
		}
	}
	else
	{
		this->operatii[this->count] = *operatie;
		this->count++;
	}
	return *this;
}

Calculator::operator int()
{
	return this->count;
}

Calculator& Calculator::operator-=(const char* operatia)
{
	if (this->count != 0)
	{
		for (int i = 0; i < this->count; i++)
		{
			if (strcmp(operatia, this->operatii[i].getName()) == 0)
			{
				for (int j = i; j < this->count - 1; j++)
				{
					operatii[j] = operatii[j + 1];
				}
				break;
			}
		}
		this->count--;
	}
	return *this;
}

void Calculator::Compute(int x, int y)
{
	for (int i = 0; i < this->count; i++)
	{
		cout<<this->operatii[i];
	}
}
