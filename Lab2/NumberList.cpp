#include "NumberList.h"

void NumberList::Init()
{
	this->count = 0;
}

bool NumberList::Add(int x)
{
	this->numbers[this->count] = x;
	this->count++;
}