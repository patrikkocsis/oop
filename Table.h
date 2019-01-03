#ifndef T_H
#define T_H

#include <string>
#include <iostream>
using namespace std;

class Table{
	int n;
	char** tabla;

public:
	Table();
	Table(int);
	friend ostream& operator<<(ostream &, const Table &);
	bool put(string, char);
};

#endif