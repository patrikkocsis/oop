#include "Table.h"

#include <iostream>
using namespace std;
int main(){
	Table T(7);
	cout << T;
	T.put("A6", 'X');
	cout << T;
	return 0;
	
}

