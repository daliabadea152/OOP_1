#ifndef PISICI_ALBE_HPP
#define PISICI_ALBE_HPP

#include "Pisici.hpp"

class Pisici_albe: public Pisici{
	
	int varsta;
	char* nume;
	char* descriere;
	bool vaccinuri;
	
public:
	Pisici_albe();
	Pisici_albe(int, const char*, const char*, bool);
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
	~Pisici_albe();
};

#endif
