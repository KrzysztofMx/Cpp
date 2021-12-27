#include <iostream>
#include <string>

using namespace std; 

// Definicja klasy bazowej:
class Pracownik {
public:
	string imie;
	string nazwisko;
	
	// Definicje konstruktorów:
	Pracownik() {}; // konstruktor domyślny
	Pracownik(string pImie, string pNazwisko) { // konstruktor z parametrami	
		imie = pImie;
		nazwisko = pNazwisko;
	}
	
	string zwrocDane() {
		return imie + " " + nazwisko;
	}		
};

// Definicja klasy pochodnej:
class Nauczyciel: public Pracownik {
public:
	string przedmiot;
	
	/* UWAGA
	 * Pomimo tego, że konstruktory nie są dziedziczone z klasy bazowej do klasy pochodnej,
	 * przy tworzeniu obiektu klasy pochodnej (czyli przy wywoływaniu konstruktora tej klasy)
	 * wywoływany jest automatycznie konstruktor jej klasy bazowej. Przy tym, jeśli w definicji
	 * konstruktora klasy pochodnej nie określono inaczej - zostanie wywołany konstruktor domyślny 
	 * klasy bazowej.
	 */	
	
	// DEFINICJE KONSTRUKTORÓW:
	Nauczyciel() {}; // konstruktor domyślny
	/* UWAGA
	 * Przy wywołaniu tego konstruktora zostanie wywołany konstruktor domyślny klasy bazowej,
	 * ponieważ nie zdecydowano inaczej.
	 */	 
	
	Nauczyciel(string pImie, string pNazwisko, string pPrzedmiot) { // konstruktor z parametrami 
		imie = pImie;
		nazwisko = pNazwisko;
		przedmiot = pPrzedmiot;
	}
	/* UWAGA
	 * Przy wywołaniu powyższego konstruktora zostanie wywołany konstruktor domyślny klasy bazowej,
	 * ponieważ nie zdecydowano inaczej.
	 */
	
	// Definicja konstruktora z parametrami z określeniem konstruktora klasy bazowej:
	Nauczyciel(string pImie, string pNazwisko) : Pracownik(pImie, pNazwisko) {}
	/* UWAGA
	 * Przy wywołaniu powyższego konstruktora zostanie wywołany określony (zdefiniowany) 
	 * po dwukropku (:) konstruktor klasy bazowej,	
	 */
	
	string zwrocDane() {
		return imie + " " + nazwisko + ", przedmiot: " + przedmiot;
	}
};
	
int main() {
	// Utworzenie obiektu nauczyciel1 klasy Nauczyciel:
	Nauczyciel nauczyciel1;	
	/* UWAGA
	 * Przy tworzeniu obiektu nauczyciel1 za pomocą konstruktora domyślnego zostanie wywołany
	 * automatycznie konstruktor domyślny (bezparametrowy) klasy bazowej Pracownik.
	 */	
	
	// Nadanie wartości polom obiektu nauczyciel1:
	nauczyciel1.imie = "Aneta"; 
	nauczyciel1.nazwisko = "Siewniak"; 
	nauczyciel1.przedmiot = "język angielski"; 		
	// Wywołanie metody zwrocDane() zdefiniowanej w klasie pochodnej Nuaczyciel:
	cout << "Dane nauczyciela: " << nauczyciel1.zwrocDane() << endl;
	
	
	// Utworzenie obiektu nauczyciel2 klasy Nauczyciel poprzez użycie konstruktora z parametrami:
	Nauczyciel nauczyciel2 = Nauczyciel("Izabela", "Siewniak", "język niemiecki");
	/* UWAGA
	 * Przy tworzeniu obiektu nauczyciel2 za pomocą konstruktora z parametrami zostanie wywołany
	 * automatycznie konstruktor domyślny (bezparametrowy) klasy bazowej Pracownik.
	 */
		
	// Wywołanie metody zwrocDane() zdefiniowanej w klasie pochodnej Nuaczyciel:
	cout << "Dane nauczyciela: " << nauczyciel2.zwrocDane() << endl;
	
	
	// Utworzenie obiektu nauczyciel3 klasy Nauczyciel:
	Nauczyciel nauczyciel3 = Nauczyciel("Edyta", "Siewniak");
	/* UWAGA
	 * Przy tworzeniu obiektu nauczyciel3 za pomocą konstruktora z parametrami zostanie wywołany
	 * zdefiniowany konstruktor z parametrami klasy bazowej Pracownik.
	 */		
	nauczyciel3.przedmiot = "język francuski"; 
	// Wywołanie metody zwrocDane() zdefiniowanej w klasie pochodnej Nuaczyciel:
	cout << "Dane nauczyciela: " << nauczyciel3.zwrocDane() << endl;
	
	return 0;
}
