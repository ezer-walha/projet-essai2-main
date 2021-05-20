#pragma once
#include "Temps.h"
#include "Date.h"
#include<iostream>
using namespace std;

class Disponibilite
{
public : 
	Date date; 
	Temps temps;
	int duree;
public : 
	Disponibilite(Date, Temps,int);
	~Disponibilite(void); 
	Date getDate();
	Temps getTemps();
	int getDuree();
	void afficherDispo();
};

