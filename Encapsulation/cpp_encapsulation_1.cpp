/* UWAGA
 * W programowaniu obiektowym mechanizm enkapsulacji - kapsułkowania (encapsulation) polega na 
 * powiązaniu ze sobą danych pamiętanych w zmiennych członkowskich (data member variables/attributes) - 
 * z operacjami na tych danych implementowanymi za pomocą funkcji członkowskich (member 
 * functions/methods).
 * 
 * Jeśli zmienne członkowskie zostaną zadeklarowane jako prywatne (private) wówczas dostęp do danych,
 * które są w nich zapisane można uzyskać - z dowolnego miejsca aplikacji - wyłącznie za pomocą
 * metod członkowskich zadeklarowanych jako publiczne (public).
 * 
 * Mechanizm enkapulacji pozwala na ukrywanie wrażliwych danych (sensitive data hiding) przed 
 * nieautoryzowanym lub nieprawidłowym dostępem, czyli zwiększa bezpieczeństwo danych. 
 * Dlatego też, enkapsulacja jest nazywana również hermetyzacją danych oraz ukrywaniem danych 
 * (data hiding).
 * 
 * Oprócz ukrywania danych można również ukrywać przed użytkownikami szczegóły implementacji
 * funkcji członkowskich klasy, które mają za zadanie przetwarzanie prywatnych danych.
 * Wówczas użytkownicy obiektu uzyskują dostęp do obiektu poprzez interfejs publiczny 
 * bez konieczności znajomości sposobu i szczegółów jego implementacji.
 * Koncepcja ta jest znana w programowaniu obiektowym jako abstrakcja danych (data abstraction),
 * która jest implementowana za pomocą klas abstrakcyjnych i interfejsów. 
 */
 
/* UWAGA
 * Metody publiczne, które zapewniają dostęp do prywatnych pól klasy z dowolnego miejsca
 * na zewnątrz tej klasy nazywane są akcesorami (accessors).
 * Metody, które umożliwiają nadanie wartości/modyfikację wartości (SET) pól prywatnych 
 * nazywane są setterami (setters).
 * Metody, które pozwalają na odczyt wartości (GET) zapisanych w polach prywatnych klasy
 * nazywane są getterami (getters).	
 */

#include <iostream>
#include <string>

using namespace std; 

class Pracownik {
	// Deklaracje zmiennych członkowskich/atrybutów/pól klasy (domyślnie prywatnych):
	string imie = "wartość_domyślna_imienia"; // zmiennej została przypisana wartość domyślna
	string nazwisko {"wartość_domyślna_nazwiska"}; // zmiennej została przypisana wartość domyślna	
		
public:	
	// Definicje akcesorów - setterów i getterów:
	// Definicja settera i gettera dla zmiennej członkowskiej imie:
	void setImie(string pImie) {
		imie = pImie;
	}
	string getImie() {
		return imie;
	}
	// Definicja settera i gettera dla zmiennej członkowskiej nazwisko:
	void setNazwisko(string pNazwisko) {
		nazwisko = pNazwisko;
	}
	string getNazwisko()	{
		return nazwisko;
	}
};
	
int main() {
	// Utworzenie obiektu pracownik:
	Pracownik pracownik;
	/* UWAGA
	 * Obiekt pracownik klasy Pracownik został utworzony za pomocą wywołania konstruktora 
	 * domyślnego. Zatem, zmienne członkowskie obiektu zostały zainicjowane wartościami domyślnymi.
	 */
	
	// Odczyt wartości wartości (get) prywatnych zmiennych członkowskich - wykorzystanie getterów:
	cout << "Dane pracownika: " 
		<< pracownik.getImie() << " " << pracownik.getNazwisko() << endl;
	
	// Ustalenie wartości (set) prywatnych zmiennych członkowskich - wykorzystanie setterów:
	pracownik.setImie("Piotr");
	pracownik.setNazwisko("Siewniak");
	
	cout << "Dane pracownika: " 
		<< pracownik.getImie() << " " << pracownik.getNazwisko() << endl;
}


