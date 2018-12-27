#ifndef FILE_H
#define FILE_H
using namespace std;

#include <string>
#include <iostream>

class File{
private: 
	string nev;
	string tartalom;

public:
	File(string nev, string tartalom = "") :nev(nev), tartalom(tartalom) {}
	
	string getname() const {
		return nev;
	} 
	string gettart() const {
		return tartalom;
	}
};

#endif // FILE_H
