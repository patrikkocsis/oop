#ifndef F_H
#define F_H

#include <string>
#include "Project.h"
#include "Dolgozo.h"
using namespace std;

class Fizikai: public Dolgozo{
	Project* project;
public:
	Fizikai(string pozicio, int ora):Dolgozo(pozicio, ora){}
	int Kereset() {
		return ora * 1000;
	}
	void addproject(string nev, string hido);
	void kiir();
	~Fizikai() {}
};

#endif