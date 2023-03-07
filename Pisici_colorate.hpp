#ifndef PISICI_COLORATE_HPP
#define PISICI_COLORATE_HPP

#include "Pisici.hpp"

class Pisici_colorate: public Pisici{
	
	int varsta;
	char* nume;
	char* descriere;
	bool vaccinuri;
	
public:
	Pisici_colorate();
	Pisici_colorate(int, const char*, const char*, bool);
	void afisare();
	
	int getVarsta();
	char* getNume();
	bool isPisicaAlba();
	bool isPisicaNeagra();
	bool isPisicaColorata();
	bool isPui();
	bool isTanara();
	bool isMatura();
	char* getDescriere();
	bool isVaccinata();
	~Pisici_colorate();
};

#endif
