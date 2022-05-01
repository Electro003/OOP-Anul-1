#pragma once
#include "Student.h"
class Catalog
{
	Student* students;
	int count;
public:
	Catalog();
	Catalog(Student* students, int count);
	~Catalog();
	int getCount();
	void operator += (const char* name);
	Student & operator [] (const char* name);
	Student & operator [] (int i);

};