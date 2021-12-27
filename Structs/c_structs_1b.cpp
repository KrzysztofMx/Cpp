#include <iostream>
#include <cstring>


// Definicja typu strukturowego Pracownik:
struct Pracownik {
	// Deklaracje pól struktury:	
	char imie[20]; 
	char nazwisko[30];  
	char stanowisko[50]; 
};

using namespace std;

main() {	
	// Deklaracja i inicjacja zmiennej pracownik1 typu strukturowego (rekordowego) Pracownik:
	Pracownik pracownik1 = {"Aneta", "Siewniak", "nauczyciel"}; 	

	// Prezentacja danych zapisanych w strukturze pracownik1:
	cout << "Dane pierwszego pracownika " << endl;
	cout << "Imię: " << pracownik1.imie << endl;
	cout << "Nazwisko: " << pracownik1.nazwisko << endl;
	cout << "Stanowisko: " << pracownik1.stanowisko << endl;
	
	
	// Deklaracja zmiennej strukturowej (rekordowej) pracownik2:
	Pracownik pracownik2;
	strcpy(pracownik2.imie, "Izabela");
	strcpy(pracownik2.nazwisko, "Siewniak");
	strcpy(pracownik2.stanowisko, "pedagog szkolny");
	/* UWAGA
	 * W języku C++ deklaracja funkcji strcpy() jest zamieszczona w pliku nagłówkowym cstring, 
	 * natomiast w języku C - w pliku string.h.
	 * Funkcja ta służy do skopiowania jednego łańcucha znaków (typu const char*) do drugiego (typu char*).
	 */
		

	// Prezentacja danych zapisanych w strukturze pracownik2:
	cout << "\nDane drugiego pracownika " << endl;
	cout << "Imię: " << pracownik2.imie << endl;
	cout << "Nazwisko: " << pracownik2.nazwisko << endl;
	cout << "Stanowisko: " << pracownik2.stanowisko << endl;

	return 0;
}