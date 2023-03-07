#include "Pisici_colorate.hpp"

Pisici_colorate::Pisici_colorate():varsta(0), nume(NULL), descriere(NULL), vaccinuri(0)
{
	//cout << "Pisici_colorate: Constructor fara parametri" << endl;
}

Pisici_colorate::Pisici_colorate(int varsta, const char* nume, const char* descriere, bool vaccinuri):varsta(varsta), vaccinuri(vaccinuri)
{
	//cout << "Pisici_colorate: Constructor cu parametri" << endl;
	this->nume = new char[strlen(nume) + 1];
	strcpy(this->nume, nume);
	
	this->descriere = new char[strlen(descriere) + 1];
	strcpy(this->descriere, descriere);
}

void Pisici_colorate::afisare()
{
	cout << "Varsta: " << varsta << endl;
	cout << "Nume pisica: " << nume << endl;
	cout << "Descriere: " << descriere << endl;
	cout << "Vaccinuri(0 - nevaccinata, 1 - vaccinata): " << vaccinuri << endl;
}

char* Pisici_colorate::getNume()
{
	return nume;
}

char* Pisici_colorate::getDescriere()
{
	return descriere;
}

bool Pisici_colorate::isVaccinata()
{
	return vaccinuri;
}

int Pisici_colorate::getVarsta()
{
	return varsta;
}

bool Pisici_colorate::isPui()
{
	return(this->getVarsta() >= 0 && this->getVarsta() <= 1);
}

bool Pisici_colorate::isTanara()
{
	return(this->getVarsta() > 1 && this->getVarsta() <= 3);
}

bool Pisici_colorate::isMatura()
{
	return(this->getVarsta() > 3);
}

bool Pisici_colorate::isPisicaAlba()
{
	return false;
}

bool Pisici_colorate::isPisicaNeagra()
{
	return false;
}

bool Pisici_colorate::isPisicaColorata()
{
	return true;
}

Pisici_colorate::~Pisici_colorate()
{
	//cout << "Pisici_colorate: Destructor" << endl;
	delete []nume;
	delete []descriere;
}
