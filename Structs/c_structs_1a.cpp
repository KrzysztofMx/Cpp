/* UWAGA
	Struktura jest to złożony typ danych o postaci:

	struct NAZWA {
		typ1 Nazwa_Pola1;
		typ2 Nazwa_Pola2;
		typ34 Nazwa_Pola3, Nazwa_Pola4;
		..............
	  };

	Elementami składowymi struktur mogą być zarówno dane typu prostego np. float, int, 
	jak również złożonego - np. tablice, inne struktury itp.
	Struktura stanowi odpowiednik rekordu (rocord) w bazie danych.

	Odwołanie się do elementów składowych struktury uzyskuje się poprzez nazwę struktury (zmiennej)
	za pomocą operatora dostępu . : nazwa_struktury.nazwa_pola.	
	Struktury w języku C nie mogą zawierać funkcji członkowskich (metod), konstruktorów, pól statycznych itp.
*/

/* UWAGA
 * Struktury w języku C++ zostały znacznie rozbudowane wzgledem struktur w języku C.
 * W C++ struktury są odpowiednikami klas, czyli mogą zawierać metody, konstruktory itp.
 * - jako elementy składowe.
 * Domyślnie elementy składowe struktur są publiczne, a elementy składowe klas - prywatne.
 */

#include <iostream>
#include <string>

// Definicja typu strukturowego o nazwie Data:
struct Data {
	// Deklaracje pól (fields):
	int dd, mm, rr;
};

// Definicja typu strukturowego o nazwie Pracownik:
struct Pracownik {
	// Deklaracje pól (fields) struktury:
	int id;
	char imie[20]; 
	char nazwisko[30]; 
	Data data_urodzenia; // pole typu strukturowego Data
};

using namespace std;

main() {	
	// Deklaracja zmiennej typu strukturowego Pracownik:
	Pracownik pracownik; 	

	cout << "Wprowadź dane wejściowe:" << endl;
	cout << "numer identyfikacyjny: "; cin >> pracownik.id;
	cout << "imię: "; cin >> pracownik.imie;
	cout << "nazwisko: "; cin >> pracownik.nazwisko;
	cout << "Data urodzenia:" << endl;
	cout << "dzień = "; cin >> pracownik.data_urodzenia.dd;
	cout << "miesiąc = "; cin >> pracownik.data_urodzenia.mm;
	cout << "rok = "; cin >> pracownik.data_urodzenia.rr;
	
	/* UWAGA
		Odwołanie się do określonego pola z danymi jest realizowane za pomocą
		operatora wyboru członka (member selection operator) struktury: . .
	*/

	cout << "\n\n Wprowadzono następujace dane: " << endl;
	cout << "Imię: " << pracownik.imie << endl;
	cout << "Nazwisko: " << pracownik.nazwisko << endl;
	cout << "Data urodzenia:" << endl;
	cout << "dzień: " << pracownik.data_urodzenia.dd << endl;
	cout << "miesiąc: " << pracownik.data_urodzenia.mm << endl;
	cout << "rok: " << pracownik.data_urodzenia.rr << endl;

	return 0;
}