#include "Catalog.h"

Catalog::Catalog()
{
	this->students = nullptr;
	this->count = 0;
}

Catalog::Catalog(Student* students, int count)
{
	students = new Student[count];
	this->count = 0;
}

Catalog::~Catalog()
{
	delete []students;
}

int Catalog::getCount()
{
	return this->count;
}

void Catalog::operator+=(const char* name)
{
	Student new_student;
	new_student.setNume(name);
	if (this->students != nullptr)
	{
		Student* new_students = new Student[this->count + 1];
		for (int i = 0; i < this->count; i++)
		{
			new_students[i] = this->students[i];
		}
		new_students[count] = new_student;
		delete[] students;
		this->count++;
		this->students = new_students;
	}
	else
	{
		this->students = new Student[this->count + 1];
		this->students[count] = new_student;
		this->count++;
	}

}

Student & Catalog::operator[](const char* name)
{
	for(int i=0 ; i<this->count ; i++)
		{
		if (strcmp(this->students[i].getNume(), name) == 0)
		{
			return students[i];
		}
	}
	Student new_student;
	return new_student;
}

Student & Catalog::operator[](int i)
{
	return this->students[i];
}

