/* UWAGA
 * Mechanizm dziedziczenia polega na tym, że dana klasa zostać zdefiniowana na podstawie innej,
 * już istniejącej klasy i w ten sposób "odziedziczyć" od niej określone elementy członkowskie 
 * (members). Przy tym, dziedziczone mogą być zarówno zmienne członkowskie (member variables)/atrybuty,
 * jak również funkcje członkowskie (member functions)/metody. 
 * 
 * Klasa istniejąca, na podstawie której tworzona jest nowa klasa nazywana jest klasą
 * bazową (base class) lub klasą nadrzędną (parent class) lub superklasą (superclass). 
 * Nowo-tworzona klasa, która dziedziczy określone pola i metody od klasy bazowej nazywana jest 
 * klasą pochodną (derived class) lub "dzieckiem" (child class) lub podklasą (subclass).
 * 
 * W ogólności, dana klasa bazowa może mieć wiele klas pochodnych.
 * I odwrotnie - klasa pochodna może mieć również wiele klas bazowych.
 */ 
 
/* UWAGA
 * W języku C++ można implementować kilka rodzajów dziedziczenia:
 * 	a) dziedziczenie pojedyncze (single inheritance);
 * 	b) dziedziczenie wielokrotne (multiple inheritance);
 * 	c) dziedziczenie hierarchiczne (hierarchical inheritance);
 * 	d) dziedziczenie wielopoziomowe (multilevel inheritance);
 * 	e) dziedziczenie mieszane (hybrid inheritance).
 * 
 * 
 * Dziedziczenie pojedyncze zachodzi wtedy, gdy klasa pochodna dziedziczy wyłącznie od jednej
 * klasy bazowej.
 * 
 * Dziedziczenie wielokrotme zachodzi wówczas, gdy klasa pochodna dziedziczy od większej
 * liczby klas bazowych.
 * 
 * Dziedziczenie hierarchiczne to takie, w którym dana klasa bazowa ma wiele klas pochodnych.
 * 
 * Dziedziczenie wielopoziomowe zachodzi wówczas, gdy dana klasa pochodna dziedziczy 
 * od klasy bazowej, która sama jest już klasą pochodną innej klasy.
 *
 * Dziedziczenie mieszane to dowolna kombinacja powyższych rodzajów dziedziczenia. 
 */


#include <iostream>
#include <string>

using namespace std; 

// Definicja klasy bazowej (base class):
class Pracownik {
public:
	string imie;
	string nazwisko;
	string zwrocDane() {
		return imie + " " + nazwisko;
	}

	/* UWAGA
	 * W ogólności, specyfikator dostepu (access specifier) danego elementu członkowskiego klasy 
	 * (class member) decyduje o tym, czy- i w jaki sposób element ten jest dziedziczony do klasy 
	 * pochodnej (lub nie jest).
	 * Dziedziczone mogą być jedynie publiczne (public) oraz chronione (protected) elementy
	 * członkowskie klasy bazowej. Elementy prywatne (private) klasy bazowej nie są dziedziczone
	 * do klasy pochodnej.
	 * 
	 * Publiczne pola i metody członkowskie klasy bazowej są dostępne wszędzie:
	 * 	1. w klasie bazowej;
	 * 	2. w klasie pochodnej;
	 * 	3. w dowolnym miejscu na zewnątrz klasy bazowej i klasy pochodnej.
	 * 
	 * Chronione pola i metody członkowskie klasy bazowej są dostępne:
	 * 	1. w klasie bazowej;
	 * 	2. w klasie pochodnej;
	 * 	Na zewnątrz klasy bazowej i pochodnej elementy te nie są dostępne.
	 * 
	 * Prywatne pola i metody członkowskie klasy bazowej są dostępne:
	 * 	1. w klasie bazowej;	
	 * 	Na zewnątrz klasy bazowej, czyli np. w klasie pochodnej, elementy te nie są dostępne.
	 * 
	 * W języku C++ NIE PODLEGAJĄ DZIEDZICZENIU:
	 * - konstruktory i destruktory klasy bazowej;
	 * - funkcje zaprzyjaźnione (friend functions) klasy bazowej;
	 * - przeciążone operatory (overloaded operators).
	 */
};

// Definicja klasy pochodnej (derived class):
class Nauczyciel: public Pracownik {
	/* UWAGA
	 * Dziedziczenie można podzielić również ze względu na specyfikator dostępu (access specifier)
	 * tryb widzialności (visibility mode) wyszczególniony przed nazwą klasy bazowej (tutaj: public).
	 * Biorąc pod uwagę to kryterium dziedziczenie może być:
	 * 	a) publiczne (public) - jak tutaj;
	 * 	b) chronione (protected);
	 * 	c) prywatne (private).
	 * Domyślnym (default) typem dziedziczenia w C++ jest dziedziczenie prywatne.
	 * 
	 * Zasady/cechy dziedziczenia publicznego:
	 * - publiczne elementy składowe klasy bazowej są dostępne jako publiczne w klasie pochodnej.
	 * 	 Tym samym, stanowią one publiczne elementy składowe obiektów klasy pochodnej.
	 * - chronione elementy składowe klasy bazowej są dostępne jako chronione w klasie pochodnej;
	 * - prywatne elementy klasy bazowej nie są dostępne bezpośrednio w klasie pochodnej. Jednakże
	 * 	 można uzyskać do nich dostęp (POŚREDNI) poprzez publiczne i chronione metody klasy bazowej.
	 * 
	 * Cechy dziedziczenia chronionego:
	 * - publiczne elementy składowe klasy bazowej są dostępne jako chronione w klasie pochodnej;
	 * - chronione elementy składowe klasy bazowej są dostępne jako chronione w klasie pochodnej;
	 * - prywatne elementy klasy bazowej nie są dostępne bezpośrednio w klasie pochodnej. 
	 * 
	 * Cechy dziedziczenia prywatnego:
	 * - publiczne elementy składowe klasy bazowej są dostępne jako prywatne w klasie pochodnej;
	 * - chronione elementy składowe klasy bazowej są dostępne jako prywatne w klasie pochodnej;
	 * - prywatne elementy klasy bazowej nie są dostępne bezpośrednio w klasie pochodnej.  
	 */ 
	
public:
	string przedmiot;
	
	string zwrocDane() {
		return imie + " " + nazwisko + ", przedmiot: " + przedmiot;
	}
};

/* UWAGA
 * Klasa pochodna Nauczyciel dziedziczy tylko od jednej klasy bazowej.
 * Stąd, jest to przykład dziedziczenia pojedynczego (single inheritance).
 */

	
int main() {
	// Utworzenie obiektu nauczyciel klasy (pochodnej) Nauczyciel:
	Nauczyciel nauczyciel;
	
	// Nadanie wartości polom obiektu nauczyciel:
	nauczyciel.imie = "Piotr"; // pole odziedziczone
	nauczyciel.nazwisko = "Siewniak"; // pole odziedziczone
	nauczyciel.przedmiot = "elektronika"; // pole natywne klasy pochodnej
	
	/* UWAGA
	 * Ze względu na fakt, że dziedziczenie jest publiczne, w klasie pochodnej
	 * dostępne są wszystkie pola publiczne odziedziczone z klasy bazowej.
	 * W klasie pochodnej pola te (imie i nazwisko) są również publiczne.
	 */
	
	// Wywołanie metody zwrocDane() zdefiniowanej w klasie pochodnej:
	cout << "Dane nauczyciela: " << nauczyciel.zwrocDane() << endl;
	
	return 0;
}
