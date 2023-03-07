#include "Pisici_albe.hpp"
#include "Pisici_negre.hpp"
#include "Pisici_colorate.hpp"

int main()
{
	
	Pisici **v;
	int size;
	size = 6;
	v = new Pisici*[size];
	v[0] = new Pisici_albe(1, "Eva", "Prietenoasa", true);
	v[1] = new Pisici_albe(4, "Tom", "Mare", false);
	v[2] = new Pisici_negre(2, "Bella", "Blanda", true);
	v[3] = new Pisici_negre(1, "Coco", "Mica", false);
	v[4] = new Pisici_colorate(5, "Bob", "Pufoasa", true);
	v[5] = new Pisici_colorate(2, "Ana", "Mica", true);
	
	cout << "Afisare informatii despre pisici: " << endl;
	for(int i = 0; i < size; i++)
	{
		v[i]->afisare();
		cout << endl;
	}
	
	int capacitate = 300; //presupunem maxima
	int pisici_adoptate = 5;
	int pisici_salvate = 3;
	int nr_zile = 0;
	
	while(capacitate > 150)
	{
		capacitate = capacitate - pisici_adoptate + pisici_salvate;
		nr_zile++;
	}
	
	cout << "Cafeneaua va avea o ocupare a locurilor <= 50% in: " << nr_zile << " zile" << endl;
	cout << endl;
	
	int mancare_zi = 100; //in g
	int mancare_pisici_zi = 300 * mancare_zi;
	long mancare_100_zile = mancare_pisici_zi * 100;
	cout << "Mancarea consumata de pisici in 100 de zile este: " << mancare_100_zile << " g = "<< mancare_100_zile / 1000 << " kg" << endl;
	cout << endl; 
	
	int ok;
	ok = 1;
	while(ok == 1)
	{
		ok = 0;
		for(int i = 0; i < size-1; i++)
		  if(strlen(v[i]->getDescriere()) < strlen(v[i+1]->getDescriere()))
		{
		  Pisici *temp;
		  temp = v[i];
		  v[i] = v[i+1];
		  v[i+1] = temp;
		  ok = 1;
	    }
	}
	
	cout << "Afisare top 3 pisici cu cea mai lunga descriere: " << endl;
	for(int i = 0; i < 3; i++)
	{
		v[i]->afisare();
		cout << endl;
	}
	
	//cate pisici sunt in fiecare categorie
	int pisici_pui = 0;
	int pisici_tinere = 0;
	int pisici_mature = 0;
	for(int i = 0; i < size; i++)
	{
		if(v[i]->isPui() == true)
		  pisici_pui++;
		if(v[i]->isTanara() == true)
		  pisici_tinere++;
	}
	
	pisici_mature = size - pisici_pui - pisici_tinere;
	
	cout << "Numar de pisici pui este: " << pisici_pui << endl;
	cout << "Numar de pisici tinere este: " << pisici_tinere << endl;
	cout << "Numar de pisici mature este: " << pisici_mature << endl;
	cout << endl;
	
	//cate au vaccinurile facute in fiecare categorie - pui, tinere, mature
	int pisici_pui_vaccinate = 0;
	int tinere_vaccinate = 0;
	int mature_vaccinate = 0;
	for(int i = 0; i < size; i++)
	{
		if(v[i]->isPui() == true)
		  if(v[i]->isVaccinata() == true)
		    pisici_pui_vaccinate++;
		
		if(v[i]->isTanara() == true)
		  if(v[i]->isVaccinata() == true)
		    tinere_vaccinate++;
		    
		if(v[i]->isMatura() == true)
		  if(v[i]->isVaccinata() == true)
		    mature_vaccinate++; 
	}
	
	cout << "Pisici pui vaccinate: " << pisici_pui_vaccinate << endl;
	cout << "Pisici tinere vaccinate: " << tinere_vaccinate << endl;
	cout << "Pisici mature vaccinate: " << mature_vaccinate << endl;
	cout << endl;
	
	//cate de fiecare culoare sunt in fiecare categorie - pui
	int pisici_pui_albe = 0;
	int pisici_pui_negre = 0;
	int pisici_pui_colorate = 0;
	for(int i = 0; i < size; i++)
	{
		if(v[i]->isPui() == true)
		  if(v[i]->isPisicaAlba() == true)
		    pisici_pui_albe++;
		if(v[i]->isPui() == true)
		  if(v[i]->isPisicaNeagra() == true)
		    pisici_pui_negre++;
	}
	pisici_pui_colorate = pisici_pui - pisici_pui_albe - pisici_pui_negre;
	
	cout << "Pisici pui negre: " << pisici_pui_negre << endl;
	cout << "Pisici pui albe: " << pisici_pui_albe << endl;
	cout << "Pisici pui colorate: " << pisici_pui_colorate << endl;
	cout << endl;
	
	//tinere de fiecare culoare
	int pisici_tinere_albe = 0;
	int pisici_tinere_negre = 0;
	int pisici_tinere_colorate = 0;
	for(int i = 0; i < size; i++)
	{
		if(v[i]->isTanara() == true)
		  if(v[i]->isPisicaAlba() == true)
		    pisici_tinere_albe++;
		if(v[i]->isTanara() == true)
		  if(v[i]->isPisicaNeagra() == true)
		    pisici_tinere_negre++;
	}
	pisici_tinere_colorate = pisici_tinere - pisici_tinere_albe - pisici_tinere_negre;
	
	cout << "Pisici tinere negre: " << pisici_tinere_negre << endl;
	cout << "Pisici tinere albe: " << pisici_tinere_albe << endl;
	cout << "Pisici tinere colorate: " << pisici_tinere_colorate << endl;
	cout << endl;
	
	//mature de fiecare culoare
	int pisici_mature_albe = 0;
	int pisici_mature_negre = 0;
	int pisici_mature_colorate = 0;
	for(int i = 0; i < size; i++)
	{
		if(v[i]->isMatura() == true)
		  if(v[i]->isPisicaAlba() == true)
		    pisici_mature_albe++;
		if(v[i]->isMatura() == true)
		  if(v[i]->isPisicaNeagra() == true)
		    pisici_mature_negre++;
	}
	pisici_mature_colorate = pisici_mature - pisici_mature_albe - pisici_mature_negre;
	
	cout << "Pisici mature negre: " << pisici_mature_negre << endl;
	cout << "Pisici mature albe: " << pisici_mature_albe << endl;
	cout << "Pisici mature colorate: " << pisici_mature_colorate << endl;
	
	
	delete []v;
	return 0;
}
