#ifndef PISICI_HPP
#define PISICI_HPP

#include <iostream>
#include <string.h>
using namespace std;

class Pisici{
public:
	
	virtual void afisare() = 0;
	virtual int getVarsta() = 0;
	virtual char* getNume() = 0;
	virtual char* getDescriere() = 0;
	virtual bool isPisicaAlba() = 0;
	virtual bool isPisicaNeagra() = 0;
	virtual bool isPisicaColorata() = 0;
	virtual bool isPui() = 0;
	virtual bool isTanara() = 0;
	virtual bool isMatura() = 0;
	virtual bool isVaccinata() = 0;
	virtual ~Pisici() = 0;
};

#endif
