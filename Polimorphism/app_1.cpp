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
	*w_pracownik->imie = "Jan";
	*w_pracownik->nazwisko = "Kowalski";
	
	// Prezentacja danych zapisanych w obiekcie pracownik1
	cout << "Dane pracownika: " << wsk_pracownik1->getImie() << " " << wsk_pracownik1->getNazwisko() << endl;
	
			
	// Utworzenie obiektu pracownik2 oraz inicjacja jego pól z danymi:
	Pracownik pracownik2 = Pracownik("Izabela", "Siewniak");
	/* UWAGA
	 * Obiekt pracownik2 został utworzony w wyniku wywołania konstruktora z parametrami.
	 */
	
	// Deklaracja zmiennej wskaźnikowej wsk_pracownik2 typu statycznego Pracownik:
	Pracownik *wsk_pracownik2;
	
	// Przypisanie wskaźnikowi wsk_pracownik2 adresu obiektu pracownik2:
	wsk_pracownik2 = &pracownik2;
	
	cout << "Dane pracownika: " 
		<< wsk_pracownik2->getImie() << " " << wsk_pracownik2->getNazwisko() << endl;	
	
	return 0;
}
