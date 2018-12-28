#ifndef F_H
#define F_H

#include <iostream>
#include <string>
#include <vector>
#include "Directory.h"

using namespace std;

class Filesystem
{
private:

	vector <Directory*> konyvtarak;
	vector <File*> root;

public:

	Filesystem() {}

	int mkdir(string knev) {
		int db = 0;
		for (int i = 0; i < konyvtarak.size(); i++) {
			if (konyvtarak[i]->getKnev() == knev) { db++; }
		}
		if (db == 0) {
			konyvtarak.push_back(new Directory(knev));
			return 0;
		}
		else { return 1; }
	}

	int touchindir(string fnev, string ftartalom, string knev="") {
		bool konyvtartalalat = false;
		int db = 0;
		for (int i = 0; i < root.size(); i++) {
			if (root[i]->getFnev() == fnev) { db++; }
		}
		if (db == 0) {
			for (int i = 0; i < konyvtarak.size(); i++) {
				if (konyvtarak[i]->getKnev() == knev) {
					return konyvtarak[i]->touch(fnev, ftartalom);
					konyvtartalalat = true;
				}
			}
			if (knev == "") {
				root.push_back(new File(fnev, ftartalom));
				konyvtartalalat = true;
				return 0;
			}
			if (konyvtartalalat == false) { return 2; }
		}
		else { return 1; }
	}


	void treelist() const {
		cout << "root" << endl;
		for (int i = 0; i < konyvtarak.size(); i++) {
			cout << "  |__" << konyvtarak[i]->getKnev() << endl;
			konyvtarak[i]->ls();
		}
		for (int i = 0; i < root.size(); i++) {
			cout << "  |__" << root[i]->getFnev() << endl;
		}
	}

	~Filesystem() {
		for (auto& k : konyvtarak){
			delete k;
		}
		for (auto& k : root) {
			delete k;
		}
	}
};

#endif
