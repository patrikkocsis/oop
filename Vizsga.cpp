#include <iostream>
#include "Filesystem.h"

using namespace std;

int main()
{
	Filesystem foo;
	foo.mkdir("Idezetek");
	foo.mkdir("Kozmondasok");
	foo.touchindir("Kut.txt", "Valami tartalom", "Kozmondasok");
	foo.touchindir("Gandalf.txt", "Valami tartalom", "Idezetek");
	foo.touchindir("Samuel.txt", "Valami tartalom", "Idezetek");
	foo.touchindir("Readme.txt", "Valami tartalom");
	foo.treelist();
}
