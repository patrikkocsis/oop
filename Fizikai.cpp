#include "Fizikai.h"
#include <iostream>

void Fizikai::kiir() {
	cout << pozicio << " " << Kereset() << " ";
	project->projectkiir();
	cout << endl;
}
void Fizikai::addproject(string nev, string hido) {
	this->project = new Project(nev, hido);
 }