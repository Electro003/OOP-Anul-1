#include "Student.h"


// v[10]  == ( int *v = new int [10] )
Student::Student(const char* name, int mate, int romana, int franceza, int sport)
{
	this->nume = new char[strlen(name) + 1];
	strcpy(this->nume, name);
	this->mate = mate;
	this->romana = romana;
	this->franceza = franceza;
	this->sport = sport;
	this->medie = (mate + romana + franceza + sport) / 4;
}

Student::~Student()
{
	delete  [] this->nume;
}

void Student::setNume(const char* nume)
{
	strcpy(this->nume, nume);
}

void Student::setMate(int mate)
{
	this->mate = mate;
}

void Student::setRomana(int romana)
{
	this->romana = romana;
}

void Student::setFranceza(int franceza)
{
	this->franceza = franceza;
}

void Student::setSport(int sport)
{
	this->sport = sport;
}

void Student::setMedie()
{
	this->medie = (this->romana + this->mate + this->franceza + this->medie)/4;
}

const char* Student::getNume()
{
	return this->nume;
}

int Student::getMate()
{
	return this->mate;
}

int Student::getRomana()
{
	return this->romana;
}

int Student::getFranceza()
{
	return this->franceza;
}

int Student::getSport()
{
	return this->sport;
}

int Student::getMedie()
{
	return this->medie;
}

void Student::printNote()
{
	printf("Nume:%s \n Mate:%d \n Romana:%d \n Franceza:%d \n Sport:%d \n Medie:%d \n",nume,mate,romana,franceza,sport,medie);
}

int& Student::operator[](const char* materie)
{
	if (strcmp(materie, "matematica") == 0)
		return this->mate;
	if (strcmp(materie, "sport") == 0)
		return this->sport;
	if (strcmp(materie, "romana") == 0)
		return this->romana;
	if (strcmp(materie, "franceza") == 0)
		return this->franceza;
}





