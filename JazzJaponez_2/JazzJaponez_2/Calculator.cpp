#include "Calculator.h"

Calculator::Calculator()
{
	
	this->count = 0;
}

Calculator& Calculator::operator+=(Oper* operatie)
{
	bool flag_exista=false;
	for (int i = 0; i < this->count; i++)
	{
		if (strcmp(adunari[i]->getName(), operatie->getName()) == 0)
			flag_exista = true;
	}
	if (flag_exista == false)
	{
		this->adunari[this->count] = operatie;
		this->count++;	
	}
	return *this;
}

Calculator& Calculator::operator-=(const char * operatie)
{
	for (int i = 0; i < this->count-1; i++)
	{
		if (strcmp(this->adunari[i]->getName(), operatie) == 0)
		{
			for (int j = i; j < this->count; j++)
			{
				this->adunari[i] = this->adunari[i + 1];
			}
		}
	}
	return *this;
}
