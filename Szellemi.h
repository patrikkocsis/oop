#ifndef S_H
#define S_H

#include "Dolgozo.h"
#include <string>
#include <vector>
#include "Project.h"
using namespace std;
class Szellemi:public Dolgozo{
	vector <Dolgozo*> szala;
	Project* project;
public:
	Szellemi(string pozicio, int ora) :Dolgozo(pozicio, ora) {}
	int Kereset() {
		return ora * 1500;
	}
	void BeosztFelv(Dolgozo* sz);
	void kiir();
	void addproject(string nev, string hido);
	Szellemi* getByPos(string pozicio);
	~Szellemi() {}
};

#endif