#include "Pisici_albe.hpp"

Pisici_albe::Pisici_albe():varsta(0), nume(NULL), descriere(NULL), vaccinuri(0)
{
	//cout << "Pisici_albe: Constructor fara parametri" << endl;
}

Pisici_albe::Pisici_albe(int varsta, const char* nume, const char* descriere, bool vaccinuri):varsta(varsta), vaccinuri(vaccinuri)
{
	//cout << "Pisici_albe: Constructor cu parametri" << endl;
	this->nume = new char[strlen(nume) + 1];
	strcpy(this->nume, nume);
	
	this->descriere = new char[strlen(descriere) + 1];
	strcpy(this->descriere, descriere);
}

void Pisici_albe::afisare()
{
	cout << "Varsta: " << varsta << endl;
	cout << "Nume pisica: " << nume << endl;
	cout << "Descriere: " << descriere << endl;
	cout << "Vaccinuri(0 - nevaccinata, 1 - vaccinata): " << vaccinuri << endl;
}

char* Pisici_albe::getNume()
{
	return nume;
}

char* Pisici_albe::getDescriere()
{
	return descriere;
}

bool Pisici_albe::isVaccinata()
{
	return vaccinuri;
}

int Pisici_albe::getVarsta()
{
	return varsta;
}

bool Pisici_albe::isPui()
{
	return(this->getVarsta() >= 0 && this->getVarsta() <= 1);
}

bool Pisici_albe::isTanara()
{
	return(this->getVarsta() > 1 && this->getVarsta() <= 3);
}

bool Pisici_albe::isPisicaAlba()
{
	return true;
}

bool Pisici_albe::isPisicaNeagra()
{
	return false;
}

bool Pisici_albe::isPisicaColorata()
{
	return false;
}

bool Pisici_albe::isMatura()
{
	return(this->getVarsta() > 3);
}

Pisici_albe::~Pisici_albe()
{
	//cout << "Pisici_albe: Destructor" << endl;
	delete []nume;
	delete []descriere;
}
