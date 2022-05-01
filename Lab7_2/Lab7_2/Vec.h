#pragma once
#include <iostream>
using namespace std;
template <class T>
class Vector
{
	T* data;
	int size;
	int count;
public:
	Vector();
	void push(const T &value);
	T & pop();
	const T& Get(int index) const;
	int GetCount();
	
};
template <class T>
inline Vector<T>::Vector()
{
	this->count = 0;
	this->size = 10;
	this->data = new T[this->size];
}

template<class T>
void Vector<T>::push(const T& value)
{
	if (this->size == this->count)
	{
		this->size *= 2;
		T* temp = new T[this->size];
		for (int i = 0; i < this->count; i++)
		{
			temp[i] = this->data[i];
		}
		delete[] this->data;
		this->data = temp;
	}
	this->data[this->count] = value;
	this->count++;
}

template<class T>
T& Vector<T>::pop()
{
	return this->data[this->count-1];
}

template<class T>
const T& Vector<T>::Get(int index) const
{
	return this->data[index];
}

template <class T>
int Vector<T>::GetCount()
{
	return this->count;
}
