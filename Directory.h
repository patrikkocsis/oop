#ifndef D_H
#define D_H

#include <iostream>
#include <string>
#include <vector>
#include "File.h"

using namespace std;

class Directory
{
private:

	string knev;
	vector <File*> fajlok;

public:

	Directory(string knev) : knev(knev) {}

	int touch(string fnev, string ftartalom) {
		int db = 0;
		for (int i = 0; i < fajlok.size(); i++) {
			if (fajlok[i]->getFnev() == fnev) { db++; }
		}
		if (db == 0) {
			fajlok.push_back(new File(fnev, ftartalom));
			return 0;
		}
		else { return 1; }
	}

	void ls() const {
		for (int i = 0; i < fajlok.size(); i++) {
			cout << "  |	|__" << fajlok[i]->getFnev() << endl;
		}
	}

	string getKnev() const { return knev; }
};

#endif
