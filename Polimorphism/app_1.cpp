#include <iostream>
#include <string>

using namespace std; 

class Pracownik {
private:
	string imie;
	string nazwisko;
		
public:
	// Definicje konstruktorów:	
	Pracownik() {} // konstruktor domyślny	
	Pracownik(string pImie, string pNazwisko) { 
		imie = pImie;
		nazwisko = pNazwisko;
	}
		
	// Deklaracje (prototypy) funkcji członkowskich (metod):
	string getImie();
	void setImie(string);
	
	string getNazwisko();
	void setNazwisko(string);		
};
	
// Definicje metod członkowskich klasy Pracownik:	
string Pracownik::getImie()	{
	return imie;
}
void Pracownik::setImie(string pImie) {
	imie = pImie;
}
string Pracownik::getNazwisko()	{
	return nazwisko;
}
void Pracownik::setNazwisko(string pNazwisko) {
	nazwisko = pNazwisko;
}


int main() {	
	// Deklaracja zmiennej wskaźnikowej (wskaźnika) wsk_pracownik1 typu statycznego Pracownik:
	Pracownik *wsk_pracownik1;	
	
	// Utworzenie obiektu typu dynamicznego Pracownik wskazywanego przez wskaźnik wsk_pracownik1:
	wsk_pracownik1 = new Pracownik();
	/* UWAGA	
	 * Operator new powoduje żądanie dynamicznego przydzielenia pamięci na stercie (heap memory)
	 * dla obiektu tworzonego za pomocą domyślnego konstruktora. 
	 * Operator ten zwraca adres pamięci utworzonego obiektu, który zostaje zapisany w zmiennej 
	 * wskaźnikowej (wskaźniku) wsk_pracownik1.
	 */ 
	/* UWAGA
	 * Dla obiektu wskazywanego przez wskaźnik wsk_pracownik1 została przydzielona pamięć nie
	 * na stosie (stack memory), w którym są alokowane np. zmienne lokalne, parametry funkcji
	 * - a na stercie (heap memory), gdzie są alokowane zmienne dynamiczne. 
	 */
	
	// Przetwarzanie danych obiektu wskazywanego przez wskaźnik wsk_pracownik2:
	wsk_pracownik1->setImie("Aneta");
	wsk_pracownik1->setNazwisko("Siewniak");
	cout << "Dane pracownika: " 
		<< wsk_pracownik1->getImie() << " " << wsk_pracownik1->getNazwisko() << endl;
	
		
	// Utworzenie obiektu wskazywanego przez wskaźnik wsk_pracownik2:
	Pracownik *wsk_pracownik2 = new Pracownik("Izabela", "Siewniak");
	/* UWAGA	 
	 * Operator new powoduje żądanie dynamicznego przydzielenia pamięci na stercie dla obiektu
	 * tworzonego za pomocą konstruktora z parametrami. 
	 * Zmienne członkowskie obiektu są inicjowane wartościami podanymi jako argumenty konstruktora.
	 * Operator new zwraca adres pamięci utworzonego obiektu, który zostaje zapisany w zmiennej 
	 * wskaźnikowej wsk_pracownik2.
	 */	
	cout << "Dane pracownika: " 
		<< wsk_pracownik2->getImie() << " " << wsk_pracownik2->getNazwisko() << endl;
	
	return 0;
}
