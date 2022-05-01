#pragma once
class Oper
{
protected:
	char name[1000];
public:
	virtual char* getName() = 0;
	virtual int calcul(int x , int y) = 0;	
};

