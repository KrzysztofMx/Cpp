
#include <iostream>
#include <string>

using namespace std;

int main()
{
	// Deklaracja i inicjacja zmiennej (statycznej) typu double:
	double bok1 = 1;

	// Deklaracja zmiennej wskaznikowej (wskaznika) do zmiennej typu double:
	double* w_bok1;
	/* Uwaga
	* Wskaznik stanowi zmienna, w ktorej mozna zapamietac (zapisac) jest adres
	* innej zmiennej okreslonego typu.
	* Tutaj: we wskazniku w_bok1 moga byc pamietane adresy (w pamieci) zmiennych
	* typu double.
	*/

	// Przypisanie wskaznikowi adresu zmiennej bok1:
	w_bok1 = &bok1;
	/* UWAGA
	* Przypisanie wskaznikowi adresu zmiennej odbywa sie za pomoca operatora
	* wyluskania adresu (address dereference operator), inaczej: operator adresu
	* (address operator), operator wskaznikowy (pointer operator).
	*/


	// Deklaracja i inicjacja zmiennej (statycznej) typu double:
	double bok2 = 2;
	// Deklaracja zmiennej wskaznikowej (wskaznika) na zmienna typu double:
	double* w_bok2;
	// Przypisanie wskaznikowi adresu zmiennej bok2:
	w_bok2 = &bok2;

	// Deklaracja zmiennej typu double:
	double pole;
	// Deklaracja i inicjacja wskaznika w_pole:
	double *w_pole = &pole;
	/* UWAGA
	* We wskazniku w_pole pamietany jest adres zmiennej pole typu double.
	*/

	// Obliczenie pola prostokata - wykorzystanie wskaznikow:
	*w_pole = (*w_bok1) * (*w_bok2); // rownowazne instrukcji: pole = bok1 * bok2;
	/* UWAGA
	* Odwolanie do zawartosci pamieci (wartosci zmiennej) wskazywanej przez wskaznik
	* realizuje sie za pomoca konstrukcji *wskaznik.
	*/

	// Deklaracja zmiennej obwod typu double, deklaracja i inicjacja wskaznika w_obwod:
	double obwod, *w_obwod = &obwod;
	/* UWAGA
	* We wskazniku w_obwod pamietany jest adres zmiennej obwod typu double.
	*/
	// Obliczenie obwodu prostokata - wykorzystanie wskaznikow: 
	*w_obwod = 2 * (*w_bok1) + 2 * (*w_bok2);

	// Prezentacja wynikow - wykorzystanie wskaznikow:
	cout << "Wyniki:" << endl;
	cout << "Pole wynosi " << *w_pole << endl;
	cout << "Obwod wynosi " << *w_obwod << endl;

	return 0;
}
