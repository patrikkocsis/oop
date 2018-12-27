#ifndef FILESYSTEM_H
#define FILESYSTEM_H
using namespace std;

#include "Directory.h"
#include <vector>
#include <string>
#include <iostream>
class Filesystem
{
private:
	vector<Directory*> rendszer;
public:
	Filesystem();
	int mkdir(string dname) {
		int db = 0;
		for (int i = 0; i < rendszer.size(); i++) {
			if (rendszer[i]->getnev() == dname) {
				db++;

			}
		}
		if (db == 0) {
			rendszer.push_back(new Directory(dname));
			return 0;
		}
		else return 1;

	}
	
};

#endif // FILE_H
