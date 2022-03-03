#include "Student.h"

void Student::SetGrade(unsigned int newGrade)
{
    grade = newGrade;
}

unsigned int Student::GetGrade()
{
    return grade;
}

void Student::CopyGrade(Student s)
{
    this->grade = s.grade;
}

void Student::SetNamte(const char* newName)
{
    strcpy(name, newName);
}

char* Student::GetName()
{
    return name;
}

Student Student::GetThisStudent()
{
    return *this;
}

static void Student::SetAverage(double average)
{
    classAverage = average;
}