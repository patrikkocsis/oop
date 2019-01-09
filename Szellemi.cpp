#include "Szellemi.h"

#include <iostream>

void Szellemi::BeosztFelv(Dolgozo* sz) {
		szala.push_back(sz);
		
}

Szellemi* Szellemi:: getByPos(string pozicio) {
	if (this->pozicio == pozicio) {
		return this;
	}
	for (auto& sz : szala) {
		Szellemi* seged = dynamic_cast<Szellemi*>(sz);
		if (sz != nullptr) {
			Szellemi* eredmeny=seged->getByPos(pozicio);
			if (eredmeny != nullptr) {
				return eredmeny;
			}
		}

	}
	return nullptr;
}
void Szellemi::kiir() {
	cout << pozicio << " " << Kereset() << " ";
	if (project != nullptr)
	project->projectkiir();
	cout<< endl;
	for (auto & k:szala) {
		k->kiir();
	}
}

void Szellemi::addproject(string nev, string hido) {
	this->project = new Project(nev, hido);
	for (auto& p : szala) {
		p->addproject(nev, hido);
	}
}
