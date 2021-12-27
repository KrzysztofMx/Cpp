#include <iostream>
#include <string>

using namespace std;

// Definicja funkcji globalnej polePr() 
auto polePr(double b1, double b2) -> double {
	return b1 * b2; // wartosc zwracana za posrednictwem nazwy funkcji
}
/* UWAGA
* Poczawszy od wersji C++ 11 dostepna jest nowa postac definicji, ktora przypomina skladnia
* funkcje strzalkowe (arrow functions) - inaczej funkcje LAMBDA.
* Ogolna postac definicji funkcji jest nastepujaca:
* 		auto nazwa_funkcji(lista_parametrow) -> zwracany_typ_wartosci { cialo funkcji }
* Sposob wywolania funkcji nie zmienia sie.
*/

// Deklaracja funkcji globalnej obwodPr() (postac funkcji dostepna od C++ 11):
auto obwodPr(double, double) -> double;

// Definicja funkcji globalnej obwodPr();
auto obwodPr(double b1, double b2) -> double {
	return 2 * b1 + 2 * b2;
}


int main() {
	// Deklaracja i inicjacja zmiennych pomocniczych:
	double bok1 = 1; // pierwszy bok prostokata
	double bok2 = 2; // drugi bok prostokata			

	cout << "POLE I OBWOD PROSTOKATA:" << endl;
	// Wywolanie funkcji polePr() i obwodPr() jako czesci skladowych wyrazen:
	cout << "Pole = " << polePr(bok1, bok2) << endl;
	cout << "Obwod = " << obwodPr(bok1, bok2) << endl;

	return 0;
}
