
#include "Szellemi.h"
#include "Fizikai.h"
#include "Dolgozo.h"
using namespace std;

int main(){
	Szellemi cegvezeto("cegvezeto", 160);
	cegvezeto.BeosztFelv(new Szellemi("marketingman", 160));
	cegvezeto.BeosztFelv(new Szellemi("projectman", 160));
	cegvezeto.getByPos("marketingman")->BeosztFelv(new Fizikai("acs", 200));
	cegvezeto.getByPos("marketingman")->addproject("Szareves","2020-09-26");
	cegvezeto.kiir();
    return 0;
}

