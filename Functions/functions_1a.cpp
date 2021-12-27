#include <iostream>
#include <string>

using namespace std;

// Definicja funkcji globalnej polePr():
double polePr(double b1, double b2) {
	double temp; // deklaracja zmiennej lokalnej
	temp = b1 * b2;
	return temp ;// wartosc zwracana za posrednictwem nazwy funkcji
}
/* UWAGA
* Funkcja globalna (global function) to taka, ktora zostala zdefiniowana globalnie
* i nie jest funkcja czlonkowska dadnej klasy (ani struktury).
*/

/* UWAGA
* Funkcja polePr() ma dwa parametry wejsciowe przekazywane przez wartosc. Oba parametry
* sa typu double. Funkcja ta zwraca na zewnatrz - za posrednictwem swojej nazwy - wartosc
* typu double.
*/

// Deklaracja funkcji globalnej obwodPr():
double obwodPr(double, double);
/* UWAGA
* Funkcja obwodPr() ma dwa parametry wejsciowe przekazywane przez wartosc. Oba parametry
* sa typu double. Funkcja ta zwraca na zewnatrz wartosc typu double.
*/

// Definicja funkcji globalnej obwodPr();
double obwodPr(double b1, double b2) {
	return 2 * b1 + 2 * b2;
}


int main() {
	// Deklaracja i inicjacja zmiennych pomocniczych:
	double bok1 = 1; // pierwszy bok prostokata
	double bok2 = 2; // drugi bok prostokata


	double pole; // pole prostokata
				 // Wywolanie funkcji polePr() jako czesci skladowej wyrazenia:
	pole = polePr(bok1, bok2);
	/* UWAGA
	* Argumentami wywolania funkcji sa zmienne pomocnicze bok1 i bok2 zdefiniowane wczesniej.
	* Jezli parametry funkcji sa przekazywane do funkcji przez wartosc (jak tutaj),
	* w chwili wywolania funkcji na stosie tworzone sa kopie tych zmiennych.
	* Kopie te sa traktowane jako zmienne lokalne funkcji i sa skladowane na stosie.
	* Funkcja przetwarza wlasnie te kopie, a nie oryginaly zmiennych bok1 i bok2.
	* Innymi slowy, funkcja nie moze zmienic wartosci zmiennych bok1 i bok2 ze wzgledu na fakt,
	* ze faktycznie nie ma do nich dostepu - ma dostep wylacznie do ich kopii.
	*/

	double obwod = obwodPr(bok1, bok2);

	cout << "POLE I OBWOD PROSTOKATA:" << endl;
	cout << "Pole = " << pole << endl;
	cout << "Obwod = " << obwod << endl;

	return 0;
}
