#ifndef D_H
#define D_H

#include <string>
using namespace std;

class Dolgozo{
protected:
	string pozicio;
	int ora;
public: 
	Dolgozo(string pozicio, int ora):pozicio(pozicio), ora(ora) {}
	virtual int Kereset()=0;
	virtual void kiir() = 0;
	virtual void addproject(string nev, string hido) = 0;
	virtual ~Dolgozo(){}
};

#endif // !1
