#include <iostream>
#include <string>

using namespace std; 

// Definicja klasy:
class Pracownik {
	// Deklaracje prywatnych statycznych zmiennych członkowskich:
	static string szkola;
	static string stanowisko;
	/* UWAGA
	 * Statyczne funkcje członkowskie (metody) są oznaczone słowem kluczowym static.
	 * Są one wspólne dla wszystkich obiektów należących do klasy, w której zostały zadeklarowane.
	 * Przy tym, aby korzystać z metod statycznych nie ma potrzeby tworzenia obiektów tej klasy.
	 * 
	 * Deklaracja (prototyp) metody statycznej jest realizowana wewnątrz klasy.
	 * Z kolei jej definicja może się znajdować zarówno wewnątrz, jak również na zewnątrz klasy,
	 * w której została zadeklarowana (jak tutaj).
	 * 
	 * Metody statyczne mogą korzystać ze statycznych zmiennych członkowskich klasy, 
	 * innych metod statycznych i dowolnych funkcji na zewnątrz klasy.
	 * 
	 * Wywołanie metody statycznej może być przeprowadzone w dwojaki sposób:
	 * 	1. za pośrednictwem klasy;
	 * 	2. za pośrednictwem obiektów klasy.
	 * Jednakże, ze względu na fakt, że meotdy statyczne są niezależnie od obiektów,
	 * lepszym rozwiązaniem jest wywoływanie metod statycznych jako członków klas, 
	 * a nie obiektów. W praktyce jest to realizowane przy użyciu operatora rozpoznawania
	 * zakresu (scope resolution operator) :: .
	 * 
	 * Jednym z najczęstszych zastosowań metod statycznych jest spełnianie przez nich roli
	 * akcesorów (setterów i getterów) dla prywatnych pól statycznych (jak tutaj).	 
	 */	
	
	// Deklaracje pól prywatnych:
	string imie;
	string nazwisko;

public:	
	// Prototypy statycznych metod publicznych:
	static void setSzkola(string); // setter prywatnego pola statycznego szkola
	static string getSzkola(); // getter prywatnego pola statycznego szkola
	static void setStanowisko(string); // setter prywatnego pola statycznego stanowisko
	static string getStanowisko(); // getter prywatnego pola statycznego stanowisko
	
	// Prototypy metod publicznych (setterów i getterów dla zwykłych pól prywatnych):
	void setImie(string);
	string getImie();
	void setNazwisko(string);
	string getNazwisko();
};

// Definicje pól statycznych:
string Pracownik::szkola = "Zespół Szkół Elektronicznych";
string Pracownik::stanowisko = "nauczyciel";


// Definicje statycznych metod publicznych:
void Pracownik::setSzkola(string pSzkola) {
	szkola = pSzkola;
}
string Pracownik::getSzkola() {
	return szkola;
}
void Pracownik::setStanowisko(string pStanowisko) {
	stanowisko = pStanowisko;
}
string Pracownik::getStanowisko() {
	return stanowisko;
}

// Definicje "zwykłych" metod publicznych:
void Pracownik::setImie(string pImie) {
	imie = pImie;
}
string Pracownik::getImie() {
	return imie;
}
void Pracownik::setNazwisko(string pNazwisko) {
	nazwisko = pNazwisko;
}
string Pracownik::getNazwisko() {
	return nazwisko;
}

int main() {		
	// Utworzenie obiektu pracownik1:
	Pracownik pracownik1;
	
	// Nadanie wartości polom obiektu pracownik1:
	pracownik1.setImie("Aneta");
	pracownik1.setNazwisko("Siewniak");
				
	cout << "Dane pracownika: " << endl;	
	// Odwołanie się do zwykłych pól obiektu pracownik1:
	cout << "Imię: " << pracownik1.getImie() << endl;
	cout << "Nazwisko: " << pracownik1.getNazwisko() << endl;
	// Odwołanie się do pól statycznych szkola i stanowisko:
	cout << "Szkoła: " << Pracownik::getSzkola() << endl;
	cout << "Stanowisko: " << Pracownik::getStanowisko() << endl << endl;
	/* UWAGA
	 * Powyższe odwołanie się do prywatnych pól statycznych zostało zrealizowane poprzez
	 * wywołanie statycznych metod publicznych pełniących dla tych pól rolę getterów.
	 * Przy tym, wykorzystano preferowaną metodę pracy z metodami statycznymi - zastosowanie
	 * klasy Pracownik wraz z operatorem zakresu :: .
	 */
	
		
	// Utworzenie obiektu pracownik2:
	Pracownik pracownik2;
	
	// Nadanie wartości "zwykłym" polom obiektu pracownik2:	
	pracownik2.setImie("Izabela");
	pracownik2.setNazwisko("Siewniak");
			
	cout << "Dane pracownika: " << endl;	
	// Odwołanie się do zwykłych pól obiektu pracownik2:
	cout << "Imię: " << pracownik2.getImie() << endl;
	cout << "Nazwisko: " << pracownik2.getNazwisko() << endl;
	// Odwołanie się do pól statycznych za pośrednictwem klasy Pracownik:
	cout << "Szkoła: " << pracownik2.getSzkola() << endl;
	cout << "Stanowisko: " << pracownik2.getStanowisko() << endl << endl;
	/* UWAGA
	 * Powyższe odwołanie się do prywatnych pól statycznych zostało zrealizowane poprzez
	 * wywołanie statycznych metod publicznych pełniących dla tych pól rolę getterów.
	 * Przy tym, wykorzystano obiekt pracownik2 wraz z operatorem wyboru członka (member 
	 * selector operator) . .
	 */
		
	
	// Zmiana wartości pola statycznego:
	Pracownik::setSzkola("Zespół Szkół Elektronicznych i Informatycznych");
	/* UWAGA
	 * Zmiana wartości pola prywatnego szkola nastąpiła na skutek wywołania statycznej
	 * metody publicznej, pełniącej rolę settera dla tego pola.
	 * Przy tym, wykorzystano klasę Pracownik i operator zakresu :: .
	 */
	cout << "Nowa nazwa szkoły: " << Pracownik::getSzkola() << endl;
	/* UWAGA
	 * Nowa (zmieniona) wartość pola statycznego szkola będzie obowiązująca dla wszystkich
	 * obiektów klasy!
	 */
	
	
	return 0;
}
