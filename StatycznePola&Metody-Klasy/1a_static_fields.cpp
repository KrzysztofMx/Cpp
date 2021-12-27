#include <iostream>
#include <string>

using namespace std; 

// Definicja klasy:
class Pracownik {
public:
	// Deklaracje publicznych statycznych zmiennych członkowskich:
	static string szkola;
	static string stanowisko;
	/* UWAGA
	 * Statyczne zmienne członkowskie (pola statyczne) są oznaczone słowem kluczowym static.
	 * Są one wspólne dla wszystkich obiektów należących do klasy, w której zostały zadeklarowane.
	 * Przy tym, aby korzystać ze zmiennych statycznych nie ma potrzeby tworzenia obiektów tej klasy.
	 * 
	 * Deklaracja pola statycznego jest realizowana wewnątrz klasy.
	 * Z kolei jego inicjacja jest realizowana poza definicją tej klasy, w której to pole zostało
	 * zadeklarowane: dodatkowo - na poziomie globalnym (global scope).
	 * 
	 * Odwołanie się do zawartości pola statycznego może być przeprowadzone w dwojaki sposób:
	 * 	1. za pośrednictwem klasy;
	 * 	2. za pośrednictwem obiektów klasy.
	 * Jednakże, ze względu na fakt, że zmienne statyczne istnieją niezależnie od obiektów,
	 * lepszym rozwiązaniem jest odwoływanie się do pól statycznych jako członków klas, 
	 * a nie obiektów. W praktyce jest to realizowane przy użyciu operatora rozpozanwania
	 * zakresu (scope resolution operator) :: .
	 * 
	 * Ważną cechą pól statycznych jest to, że nawet jeśli zostały zadeklarowane w klasie 
	 * jako prywatne lub chronione, ich definicja odbywa się na zewnątrz klasy.
	 */	
	
	// Deklaracje zwykłych pol publicznych:
	string imie;
	string nazwisko;
	
	// Prototyp funkcji członkowskiej:
	void zwrocDane(string&, string&, string&, string&); 
};

// Definicje pól statycznych:
string Pracownik::szkola = "Zespół Szkół Elektronicznych";
string Pracownik::stanowisko = "nauczyciel";

// Definicja funkcji członkowskiej:
void Pracownik::zwrocDane(string &pImie, string &pNazwisko, string &pSzkola, string &pStanowisko) {	
	pImie = imie;
	pNazwisko = nazwisko;
	pSzkola = szkola;
	pStanowisko = stanowisko;
}


int main() {		
	// Utworzenie obiektu pracownik1:
	Pracownik pracownik1;
	
	// Nadanie wartości polom obiektu pracownik1:
	pracownik1.imie = "Aneta"; 
	pracownik1.nazwisko = "Siewniak";
			
	string aSzkola, aImie, aNazwisko, aStanowisko; // zmienne pomocnicze
	
	// Odczyt zawartości pól zwykłych i statycznych:
	pracownik1.zwrocDane(aImie, aNazwisko, aSzkola, aStanowisko);
	/* UWAGA
	 * Odczyt wartości zwykłych pól obiektu pracownik1 oraz pól statycznych klasy Pracownik
	 * zrealizowano za pomocą metody publicznej zwrocDane().
	 */
	cout << "Dane pracownika: " << endl;	
	cout << "Imię: " << aImie << endl;
	cout << "Nazwisko: " << aNazwisko << endl;
	cout << "Szkoła: " << aSzkola << endl;
	cout << "Stanowisko: " << aStanowisko << endl << endl;
	cout << "____________"  << endl;
	
	// Utworzenie obiektu pracownik2:
	Pracownik pracownik2;
	
	// Nadanie wartości "zwykłym" polom obiektu pracownik2:
	pracownik2.imie = "Izabela"; 
	pracownik2.nazwisko = "Siewniak";
			
	cout << "Dane pracownika: " << endl;	
	// Odwołanie się do zwykłych pól obiektu pracownik2:
	cout << "Imię: " << pracownik2.imie << endl;
	cout << "Nazwisko: " << pracownik2.nazwisko << endl;
	// Odwołanie się do pól statycznych za pośrednictwem klasy Pracownik:
	cout << "Szkoła: " << Pracownik::szkola << endl;
	cout << "Stanowisko: " << Pracownik::stanowisko << endl << endl;
	/* UWAGA
	 * Odwołanie się do pól statycznych na zewnątrz klasy jest możliwe, ponieważ są one
	 * zadeklarowane w klasie jako publiczne.
	 */
	
	
	// Utworzenie obiektu pracownik3:
	Pracownik pracownik3;
	
	// Nadanie wartości "zwykłym" polom obiektu pracownik3:
	pracownik3.imie = "Edyta"; 
	pracownik3.nazwisko = "Siewniak";
		
	cout << "Dane pracownika: " << endl;	
	// Odwołanie się do zwykłych pól obiektu pracownik2:
	cout << "Imię: " << pracownik3.imie << endl;
	cout << "Nazwisko: " << pracownik3.nazwisko << endl;
	// Odwołanie się do pól statycznych za pośrednictwem obiektu pracownik3:
	cout << "Szkoła: " << pracownik3.szkola << endl;
	cout << "Stanowisko: " << pracownik3.stanowisko << endl<< endl;
	/* UWAGA
	 * Odwołanie się do pól statycznych na zewnątrz klasy jest możliwe, ponieważ są one
	 * zadeklarowane w klasie jako publiczne.
	 */
	
	// Zmiana wartości pola statycznego:
	Pracownik::szkola = "Zespół Szkół Elektronicznych i Informatycznych";
	cout << "Nowa nazwa szkoły: " << Pracownik::szkola << endl;
	/* UWAGA
	 * Nowa (zmieniona) wartość pola statycznego szkola będzie obowiązująca dla wszystkich
	 * obiektów klasy!
	 */
		
	return 0;
}
