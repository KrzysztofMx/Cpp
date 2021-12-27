#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>

using namespace std;
int main()
{
	fstream plik1;
	fstream plik2;
	fstream plik3;

	plik1.open("pol.txt", ios::in);
	string linia1;
	plik2.open("ang.txt", ios::in);
	string linia2;

	if (plik1.good() == false) {
		cout << "Nie mozna otworzyc pliku pierwszego!" << endl;
	}
	else {
		cout << "Plik Polski otwarty :)" << endl;
	}

	if (plik2.good() == false) {
		cout << "Nie mozna otworzyc pliku drugiego!" << endl;
	}
	else {
		cout << "Plik Angielski otwarty :)" << endl;
	}

	for (int i = 1; i <= 3; i++) {

		getline(plik1, linia1);
		getline(plik2, linia2);
		plik3.open("pol-ang.txt", ios::out | ios::app);
		plik3 << linia1 << " - " << linia2 << endl;
		plik3.close();
		
	}
		
		
	plik1.close();
	plik2.close();

}
