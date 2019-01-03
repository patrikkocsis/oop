#include "Table.h"

#include <iomanip>

Table::Table(int n): n(n){
	tabla = new char*[n];
	for (int i = 0; i < n; i++) {
		tabla[i] = new char[n];
		for(int j=0; j<n; j++){
		tabla[i][j] = ' ';
	}
	}
	int sor = n / 2-1;
	int oszlop = n / 2-1;
	tabla[sor][oszlop] = 'X';
	tabla[sor + 1][oszlop + 1] = 'X';
	tabla[sor+1][oszlop] = 'O';
	tabla[sor][oszlop + 1] = 'O';

}

Table::Table() :n(8){}

ostream& operator<<(ostream &s, const Table &masik) {
	s << "   |";
	for (int i = 0; i < masik.n; i++) {
		s << setw(2);
		s << i + 1 << " |";
	}
	s << endl;
	for (int i = 0; i < masik.n+1; i++) {
		s << "---+";
	}
	s << endl;
	for (int i = 0; i < masik.n; i++) {
		
			for (int j = 0; j < masik.n+1; j++) {
				if (j == 0)
				s << " " << char('A' + i) << " |";
				else s << " "<<masik.tabla[i][j-1]<<" |";
		}
			s << endl;
			for (int k = 0; k < masik.n+1; k++) {
				s << "---+";
			}
			s << endl;
			
	}
	
	return s;
}
bool Table::put(string mezo, char jel) {
	char betu;
	betu = mezo[0];
	int hossz = mezo.length();
	string szam = mezo.substr(1, hossz);
	int sz = stoi(szam) - 1;
	int b = int(betu) - 65;
	if (tabla[b][sz] == ' ' && b <= n && sz <= n) {
		tabla[b][sz] = jel;
		return true;
		
	}
   else{
	return false;
	}
	/*else {
		cout << "Rossz";
		return false;
		
	}*/
}
