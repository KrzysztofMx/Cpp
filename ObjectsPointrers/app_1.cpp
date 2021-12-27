#include <iostream>
using namespace std; 

// Definicja klasy Pracownik:
class Pracownik {
public:
	string imie;
	string nazwisko;
		
	void wyswietlDane() {
		cout << "Imię: " << imie << endl;
		cout << "Nazwisko: " << nazwisko << endl;
	}
};
	
int main() {
	// Utworzenie obiektu pracownik1 klasy Pracownik:
	Pracownik pracownik1;
			
	// Deklaracja zmiennej wskaźnikowej (wskaźnika) na obiekt należący do typu Pracownik:
	Pracownik *w_pracownik1;
	
	// Przypisanie wskaźnikowi wsk_pracownik1 adresu obiektu pracownik1:
	w_pracownik1 = &pracownik1;	
	
	// Nadanie wartości zmiennym członkowskim obiektu pracownik1:
	w_pracownik1->imie = "Jan";
	w_pracownik1->nazwisko = "Kowalski";
	
	// Prezentacja danych zapisanych w obiekcie pracownik1
	cout << "Dane pracownika: "; 
	w_pracownik1->wyswietlDane();
	cout << endl;

}
