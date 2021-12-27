
#include <iostream>
#include <string>

using namespace std;

int main()
{
	// Deklaracja zmiennej wskaznikowej (wskaznika) na zmienna typu double:
	double* w_bok1;
	/* Uwaga
	* Wskaznik stanowi zmienna, w ktorej pamietany jest adres innej zmiennej okreslonego typu.
	* Tutaj: we wskazniku w_bok1 moga byc pamietane adresy (w pamieci) zmiennych typu double.
	*/

	// Utworzenie zmiennej (dynamicznej) typu double, ktorej adres zostaje zapamietany 
	// we wskazniku w_bok1:
	w_bok1 = new double;
	/* UWAGA
	* Operator new sluzy do zarezerwowania okreslonej wielkosci pamieci na stercie (heap)
	* w celu zapamietania tam danej (danych). Tutaj: wielkosc tej pamieci jest okreslona
	* za pomoca typu tworzonej zmiennej - double.
	* Po zaalokowaniu odpowiedniego obszaru pamieci operator new zwraca adres tego obszaru.
	* Tutaj: adres zaalokowanego obszaru na dana typu double zostaje podstawiony pod zmienna
	* wskaznikowa w_bok1.
	*/

	// Inicjacja wartosci zmiennej dynamicznej wskazywanej przez wskaznik w_bok1:
	*w_bok1 = 1;
	/* UWAGA
	* Konstrukcja *wskaznik oznacza, ze nastepuje odwolanie do zawartosci pamieci
	* wskazywanej przez wskaznik.
	* Konstrukcja ta dotyczy zarowno zmiennych statycznych, jak rowniez dynamicznych.
	*/

	double* w_bok2 = new double;
	/* UWAGA
	* W wyrazeniu powyzej nastepuje deklaracja wskaznika w_bok2 oraz jego inicjacja.
	* Wspomniana inicjacja wskaznika jest realizowana po zaalokowaniu na stercie pamieci
	* niezbednej do przechowania danej typu double i zwroceniu (przez operator new)
	* adresu tej pamieci. Zwrocony adres zostaje nastepnie przypisany do wskaznika w_bok2.
	*/

	// Nadanie wartosci (inicjacja) zmiennej dynamicznej wskazywanej przez wskaznik w_bok2:
	*w_bok2 = 2;

	// Utworzenie zmiennej dynamicznej wskazywanej przez wskaznik w_pole:
	double *w_pole = new double;

	// Obliczenie pola prostokata - wykorzystanie wskaznikow:
	*w_pole = (*w_bok1) * (*w_bok2); // rownanie instrukcji: pole = bok1 * bok2;	

									 // Utworzenie zmiennej dynamicznej wskazywanej przez wska�nik w_obwod:
	double *w_obwod = new double;

	// Obliczenie obwodu prostokata - wykorzystanie wskaznikow: 
	*w_obwod = 2 * (*w_bok1) + 2 * (*w_bok2);

	// Zwolnienie pamieci na stercie zaalokowanej dla zmiennych dynamicznych wskazywanych
	// przez wskazniki w_bok1 i w_bok2:
	delete w_bok1;
	delete w_bok2;
	/* UWAGA
	* Operator delete sluzy do zwalniania pamieci na stercie zaalokowanej wczesniej
	* za pomoca operatora new.
	* Jezeli pamiec nie zostanie zwolniona poprzez uzycie delete, zostaje i tak zwolniona
	* po zakonczeniu dzialania aplikacji.
	*/

	// Prezentacja wynikow - wykorzystanie wskaznikow:
	cout << "Wyniki:" << endl;
	cout << "Pole wynosi " << *w_pole << endl;
	cout << "Obwod wynosi " << *w_obwod << endl;

	// Zwolnienie pamieci zaalokowanej dla zmiennych dynamicznych wskazywanych
	// przez wskazniki w_pole i w_obwod:
	delete w_pole;
	delete w_obwod;



	return 0;
}
