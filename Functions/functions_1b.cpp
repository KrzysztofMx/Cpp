#include <iostream>
#include <string>

using namespace std;

// Deklaracje funkcji globalnych:
void polePr(double, double, double&);
void obwodPr(double, double, double&);
/* UWAGA
* Funkcje polePr() i obwodPr() maja po trzy parametry. Dwa pierwsze sa przekazywane
* do tych funkcji przez wartosc, trzeci - przez referencje.
* Slowo kluczowe void oznacza, ze funkcja nie zwraca na zewnatrz za posrednictwem nazwy
* zadnej wartosci.
*/

// Definicje funkcji zadeklarowanych wczesniej:
void polePr(double b1, double b2, double& poleP) {
	poleP = b1 * b2;
}
void obwodPr(double b1, double b2, double& obwodP) {
	obwodP = 2 * b1 + 2 * b2;
}


int main()
{
	double bok1 = 1;
	double bok2 = 2;

	double pole;
	// Wywolanie funkcji polePr():
	polePr(bok1, bok2, pole);
	/* UWAGA
	* Wywolanie funkcji polePr() typu void stanowi niezalezna (samodzielna) instrukcje.
	* Dwa pierwsze argumenty wywolania sa przekazywane do funkcji przez wartosc,
	* trzeci argument - przez referencje - jak to okreslono w deklaracji funkcji.
	* Oznacza to, ze dla zmiennych bok1 i bok2 na stosie tworzone sa ich kopie,
	* ktore stanowia zmienne lokalne o nazwach b1 i b2 (odpowiadajace parametrom funkcji).
	* Innymi slowy, parametrom b1 i b2 (w definicji funkcji) przypisane zostaja wartosci
	* kopii arumentow wywolania funkcji - bok1 i bok2.
	* Dla argumentu referencyjnego pole jej kopia nie jest wykonywana poniewaz nie jest
	* ona potrzebna. Wynika to z faktu, ze parametr referencyjny o nazwie poleP stanowi
	* stanowi inna nazwe zmiennej globalnej pole.
	* Wszystkie operacje odbywaja sie na oryginale zmiennej pole, pod nazwa poleP.
	*/

	double obwod;
	obwodPr(bok1, bok2, obwod);

	cout << "Wyniki:" << endl;
	cout << "Pole wynosi " << pole << endl;
	cout << "Obw�d wynosi " << obwod << endl;

	return 0;
}
