#include <iostream>

#include <string.h>
#include <cstring>

// Definicja typu strukturowego Pracownik:
struct Pracownik {	
	char imie[20]; 
	char nazwisko[30];  
	char stanowisko[50]; 
};

using namespace std;

main() {	
	// Deklaracja wskaźnika wsk i utworzenie struktury typu Pracownik (w pamięci przydzielonej 
	// dynamicznie) wskazywanej przez ten wskaźnik:
	Pracownik *wsk = new Pracownik;
	
	// Nadanie wartości polom struktury:
	strcpy(wsk->imie, "Piotr");
	strcpy(wsk->nazwisko, "Siewniak");
	strcpy(wsk->stanowisko, "nauczyciel");
	/* UWAGA
	 * Odwołanie do pól struktury powyżej następuje poprzez wykorzystanie wskaźnika na strukturę,
	 * operatora wyboru -> i nazwy pola struktury: wskaźnik->nazwa_pola.
	 */
		
	// Prezentacja danych zapisanych w strukturze:
	cout << "Dane pracownika " << endl;
	cout << "Imię: " << wsk->imie << endl;
	cout << "Nazwisko: " << wsk->nazwisko << endl;
	cout << "Stanowisko: " << wsk->stanowisko << endl;
	
	return 0;
}