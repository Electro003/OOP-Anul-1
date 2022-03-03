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

void NumberList::Sort()
{
	for (int i = 0; i < count - 1; i++)
		for (int j = i + 1; j < count; j++)
			if (numbers[i] > numbers[j])
			{
				numbers[i] += numbers[j];
				numbers[j] = numbers[i] - numbers[
				numbers[i] -= numbers[j];
			}
}

void NumberList::Print()
{
	for (int i = 0; i < count; i++)
		
}