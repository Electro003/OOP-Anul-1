#include "Sort.h"
Sort::Sort(int nrElements, int min, int max)
{
	this->v = new int[nrElements];
	this->count = nrElements;
	for (int i = 0; i < nrElements; i++)
		this->v[i] = min + rand() % (max - min + 1);
}

Sort::Sort(int* vector, int nrElements)
{
	this->v = new int[nrElements];
	this->count = nrElements;
	for (int i = 0; i < nrElements; i++)
		this->v[i] = vector[i];
}

Sort::Sort(int nrElements, ...)
{
	this->v = new int[nrElements];
	this->count = nrElements;
	va_list arg;
	va_start(arg, nrElements);
	for (int i = 0; i < nrElements; i++)
	{
		this->v[i] = va_arg(arg, int);
	}
	va_end(arg);
}

Sort::Sort(string str)
{
	stringstream ss;
	ss << str;
	int i , j=0;
	vector<int> vec;
	while (ss >> i)
	{
		vec.push_back(i);
		if (ss.peek() == ',')
			ss.ignore();
	}
	this->count = vec.size();
	this->v = new int[count];
	for (int i = 0; i < this->count; i++)
		v[i] = vec.at(i);
}

Sort::~Sort()
{
	if (this->v != nullptr)
		delete[] this->v;
}

void Sort::Print()
{
	for (int i = 0; i < count; i++)
		cout << this->v[i]<<" ";
}

int Sort::GetElementsCount()
{
	return this->count;
}

int Sort::GetElementFromIndex(int index)
{
	return this->v[index];
}
