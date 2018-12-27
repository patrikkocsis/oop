#ifndef DIRECTORY_H
#define DIRECTORY_H

#include "file.h"
#include <string>
#include <iostream>
#include <map>
using namespace std;
#include <vector>

class Directory{
private:
	string nev;
	vector<File*> konyvtar;

public:
	Directory(string nev) :nev(nev) {}
	int touch(string fnev, string ftartalom) {
		int db =0;
		for (int i = 0; i < konyvtar.size(); i++) {
			if (konyvtar[i]->getname() == fnev) {
				db++;
				
			}
		}
		if (db == 0) {
		konyvtar.push_back(new File(fnev,ftartalom));
		return 0;
		}
		else return 1;
			
	}
	string getnev() const {
		return nev;
	}

	void ls() const {
		for (int i = 0; i < konyvtar.size(); i++) {
			cout << konyvtar[i]->getname() << endl;
		}
	}
	
};

#endif // DIRECTORY_H