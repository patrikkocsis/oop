#ifndef P_H
#define P_H

#include <string>
#include "Dolgozo.h"
#include <iostream>
using namespace std;

class Project{
protected:
	string nev;
	string hido;
public:
	Project(string nev, string hido) :nev(nev), hido(hido){}
	void projectkiir() {
		cout << nev<<" "<< hido;
	}
	~Project();
};

#endif