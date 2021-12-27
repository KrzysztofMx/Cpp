#include <iostream>
#include <string>

using namespace std; 

class Osoba {
public:
	string imie;
	string nazwisko;
	string zwrocDane() {
		return imie + " " + nazwisko;
	}		
};

class Przedmiot {
public:
	string przedmiot;
};

class Klasa {
public:
	string klasa;
};


// Definicja klasy pochodnej Pracownik klasy bazowej Osoba:
class Pracownik: public Osoba {
public:
	string stanowisko;
	string zwrocDane() {
		return imie + " " + nazwisko + ", stanowisko: " + stanowisko;
	}		
};

// Definicja klasy pochodnej Nauczyciel klas bazowych Pracownik, Przedmiot:
class Nauczyciel: public Pracownik, public Przedmiot {
public:		
	string zwrocDane() {
		return imie + " " + nazwisko + ", przedmiot: " + przedmiot;
	}
};

// Definicja klasy pochodnej Wychowawca klas bazowych Nauczyciel i Klasa:
class Wychowawca: public Nauczyciel, public Klasa {
public:		
	string zwrocDane() {
		return imie + " " + nazwisko + ", przedmiot: " + przedmiot + ", klasa: " + klasa;
	}
};

// Definicja klasy pochodnej Uczen klas bazowych Osoba i Klasa:
class Uczen: public Osoba, public Klasa {
public:		
	string zwrocDane() {
		return imie + " " + nazwisko + ", klasa: " + klasa;
	}
};

/* UWAGI
 * 	1. 	Klasa bazowa Osoba ma dwie klasy pochodne: Pracownik i Uczen.
 * 		Zachodzi zatem dziedziczenie hierarchiczne.
 * 
 * 	2.	Klasy: Nauczyciel, Wychowawca i Uczen dziedziczą od dwóch innych klas (bazowych).
 * 		Zachodzi dziedziczenie wielokrotne.
 * 	3. 	Klasa Wychowawca jest "prawnukiem", klasa Nauczyciel - "wnukiem", klasa
 * 		Pracownik - "synem" - klasy Osoba.
 * 		Zachodzi dziedziczenie wielopoziomowe.
 * 
 * 		Biorąc pod uwagę powyższe, pomiędzy klasami zachodzi dziedziczenie mieszane.
 */

	
int main() {	
	// Utworzenie obiektu wychowawca klasy Wychowawca:
	Wychowawca wychowawca;
	
	// Nadanie wartości polom obiektu wychowawca:
	wychowawca.imie = "Piotr"; // pole odziedziczone od klasy Osoba
	wychowawca.nazwisko = "Siewniak"; // pole odziedziczone od klasy Osoba
	wychowawca.przedmiot = "elektronika"; // pole odziedziczone od klasy Przedmiot
	wychowawca.klasa = "4A"; // pole odziedziczone od klasy Klasa
	
	// Wywołanie metody zwrocDane() zdefiniowanej w klasie Wychowawca:
	cout << "Dane nauczyciela - wychowawcy: " << wychowawca.zwrocDane() << endl;
	
	return 0;
}
