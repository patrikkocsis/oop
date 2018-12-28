#ifndef FILE_H
#define FILE_H

#include <iostream>
#include <string>

using namespace std;

class File
{
private:

	string fnev;
	string ftartalom;

public:

	File(string fnev, string ftartalom="") : fnev(fnev), ftartalom(ftartalom) {}
	
	string getFnev() const { return fnev; }
	string getFtartalom() const { return ftartalom; }
};

#endif // !FILE:H
