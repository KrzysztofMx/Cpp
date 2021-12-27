#include <iostream>

// Definicja typu strukturowego Pracownik:
struct Pracownik {	
	char imie[20]; 
	char nazwisko[30];  
	char stanowisko[50]; 
};

using namespace std;

main() {	
	// Deklaracja i inicjacja zmiennej pracownik typu Pracownik:
	Pracownik pracownik = {"Piotr", "Siewniak", "nauczyciel"}; 
	
	// Deklaracja wskaźnika na zmienną typu strukturowego Pracownik:
	Pracownik* wsk;	
	
	// Przypisanie wskaźnikowi wsk adresu zmiennej pracownik:
	wsk = &pracownik;

	// Prezentacja danych zapisanych w strukturze pracownik1:
	cout << "Dane pracownika " << endl;
	cout << "Imię: " << wsk->imie << endl;
	cout << "Nazwisko: " << wsk->nazwisko << endl;
	cout << "Stanowisko: " << wsk->stanowisko << endl;
	
	/* UWAGA
		Odwołanie się do określonego pola struktury jest realizowane za pomocą
		operatora wyboru członka (member selection operator) struktury: -> .
	*/

	return 0;
}