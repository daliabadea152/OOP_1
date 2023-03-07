#ifndef PISICI_NEGRE_HPP
#define PISICI_NEGRE_HPP

#include "Pisici.hpp"

class Pisici_negre: public Pisici{
	
	int varsta;
	char* nume;
	char* descriere;
	bool vaccinuri;
	
public:
	Pisici_negre();
	Pisici_negre(int, const char*, const char*, bool);
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
	~Pisici_negre();
};

#endif
