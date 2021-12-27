/* UWAGA
 * Dziedziczenie wielopoziomowe zachodzi wówczas, gdy dana klasa pochodna (derived class) 
 * dziedziczy od klasy bazowej (base class), która sama jest już klasą pochodną innej klasy.
 */
#include <iostream>
#include <string>

using namespace std; 

// Definicja klasy bazowej ("ojca"):
class Pracownik {
public:
	string imie;
	string nazwisko;
	string zwrocDane() {
		return imie + " " + nazwisko;
	}		
};

// Definicja klasy pochodnej Nauczyciel - "syna" od klasy bazowej Pracownik - "ojca":
class Nauczyciel: public Pracownik {
public:
	string przedmiot;
	
	string zwrocDane() {
		return imie + " " + nazwisko + ", przedmiot: " + przedmiot;
	}
};

// Definicja klasy pochodnej Wychowawca - "wnuka" od klasy bazowej Pracownik ("syna"):
class Wychowawca: public Nauczyciel {
public:
	string klasa;
	
	string zwrocDane() {
		return imie + " " + nazwisko + ", przedmiot: " + przedmiot + ", klasa: " + klasa;
	}
};
	
int main() {
	// Utworzenie obiektu wychowawca klasy Wychowawca:
	Wychowawca wychowawca;
	
	// Nadanie wartości polom obiektu wychowawca:
	wychowawca.imie = "Piotr"; // pole odziedziczone od klasy Pracownik (dziadka)
	wychowawca.nazwisko = "Siewniak"; // pole odziedziczone od klasy Pracownik (dziadka)
	wychowawca.przedmiot = "elektronika"; // pole odziedziczone od klasy Nauczyciel (ojca)
	wychowawca.klasa = "4A"; // pole natywne (własne) klasy Wychowawca
	
	// Wywołanie metody zwrocDane() zdefiniowanej w klasie pochodnej Wychowawca:
	cout << "Dane nauczyciela - wychowawcy: " << wychowawca.zwrocDane() << endl;
	
	return 0;
}
