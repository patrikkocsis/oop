// Vizsga.cpp : Defines the entry point for the console application.
//

#include "File.h"
#include "Directory.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
	File f("alma");
	cout<<f.getname()<<endl;
	Directory d("Ricsimeleg");
	d.touch("NemRicsi", "asd");
	d.touch("a", "sas");
	d.touch("a", "sos");
	d.touch("c", "sos");
	d.ls();
	return 0;
}

