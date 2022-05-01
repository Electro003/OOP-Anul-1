#pragma once
#include <string.h>
#include <stdio.h>
class Student
{
	char* nume;
	int mate;
	int romana;
	int franceza;
	int sport;
	int medie;
public:
	Student() :mate(0), romana(0), franceza(0), sport(0), medie(0) {};
	Student(const char* name, int mate, int romana, int franceza, int sport);
	~Student();
	void setNume(const char* nume);
	void setMate(int mate);
	void setRomana(int romana);
	void setFranceza(int franceza);
	void setSport(int sport);
	void setMedie();
	const char* getNume();
	int getMate();
	int getRomana();
	int getFranceza();
	int getSport();
	int getMedie();
	void printNote();	
	int & operator[](const char * materie);
};

