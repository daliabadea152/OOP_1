#include "Pisici_negre.hpp"

Pisici_negre::Pisici_negre():varsta(0), nume(NULL), descriere(NULL), vaccinuri(0)
{
	//cout << "Pisici_negre: Constructor fara parametri" << endl;
}

Pisici_negre::Pisici_negre(int varsta, const char* nume, const char* descriere, bool vaccinuri):varsta(varsta), vaccinuri(vaccinuri)
{
	//cout << "Pisici_negre: Constructor cu parametri" << endl;
	this->nume = new char[strlen(nume) + 1];
	strcpy(this->nume, nume);
	
	this->descriere = new char[strlen(descriere) + 1];
	strcpy(this->descriere, descriere);
}

void Pisici_negre::afisare()
{
	cout << "Varsta: " << varsta << endl;
	cout << "Nume pisica: " << nume << endl;
	cout << "Descriere: " << descriere << endl;
	cout << "Vaccinuri(0 - nevaccinata, 1 - vaccinata): " << vaccinuri << endl;
}

char* Pisici_negre::getNume()
{
	return nume;
}

char* Pisici_negre::getDescriere()
{
	return descriere;
}

bool Pisici_negre::isVaccinata()
{
	int nr_vaccinuri = 0;
	return vaccinuri;
}

int Pisici_negre::getVarsta()
{
	return varsta;
}

bool Pisici_negre::isPui()
{
	return(this->getVarsta() >= 0 && this->getVarsta() <= 1);
}

bool Pisici_negre::isTanara()
{
	return(this->getVarsta() > 1 && this->getVarsta() <= 3);
}

bool Pisici_negre::isPisicaAlba()
{
	return false;
}

bool Pisici_negre::isPisicaNeagra()
{
	return true;
}

bool Pisici_negre::isPisicaColorata()
{
	return false;
}

bool Pisici_negre::isMatura()
{
	return(this->getVarsta() > 3);
}

Pisici_negre::~Pisici_negre()
{
	//cout << "Pisici_negre: Destructor" << endl;
	delete []nume;
	delete []descriere;
}
