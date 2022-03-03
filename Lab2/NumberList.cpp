#include "NumberList.h"

void NumberList::Init()
{
	this->count = 0;
}

bool NumberList::Add(int x)
{
	if (count < 10)
	{
		this->numbers[this->count] = x;
		this->count++;
		return 1;
	}
	return 0;
	
}

void NumberList::Sort()
{
	for (int i = 0; i < count - 1; i++)
		for (int j = i + 1; j < count; j++)
			if (this->numbers[i] > numbers[j])
			{
				numbers[i] += numbers[j];
				numbers[j] = numbers[i] - numbers[j];
				numbers[i] -= numbers[j];
			}
}

void NumberList::Print()
{
	for (int i = 0; i < count; i++)
		cout << numbers[i] << " ";
		
}