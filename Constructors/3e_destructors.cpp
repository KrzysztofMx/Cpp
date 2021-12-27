/* UWAGA
 * Destruktor stanowi specjalną funkcję członkowską klasy, która jest wykonywana
 * automatycznie podczas niszczenia obiektu. Jego zadaniem jest wyczyszczenie pamięci
 * przydzielonej podczas tworzenia obiektu za pomocą konstruktora.
 * Definicja destruktora w klasie jest opcjonalna - definicja klasy nie musi zawierać 
 * jawnej definicji destruktora.
 * 
 * W przypadku prostych klas, które nie operują na strukturach dynamicznych, plikach, 
 * bazach danych, definiowanie destruktora nie jest konieczne - C++ automatycznie zwolni
 * (wyczyści) pamięć alokowaną dla obiektów.
 * 
 * Klasa może zawierać definicję tylko jednego destruktora.
 * Destruktor nie ma żadnych parametrów i nie zwraca żadnej wartości.
 * Destruktor (jeśli istnieje) jest wykonywany automatycznie (wywołuje sam siebie) wtedy,
 * gdy obiekt jest niszczony (wychodzi poza zakres widoczności).
 */ 

#include <iostream>
#include <string>

using namespace std; 

class Pracownik {
private:
	string imie;
	string nazwisko;
		
public:
	// Definicje konstruktorów:	
	Pracownik() {}; 	
	Pracownik(string pImie, string pNazwisko) { 
		imie = pImie;
		nazwisko = pNazwisko;
	};
	// Definicja destruktora:
	~Pracownik() {
		cout << "'Ciche' wywołanie destruktora obiektu klasy Pracownik ..." << endl;
	};
		
	// Deklaracje funkcji członkowskich pełniących rolę akcesorów: 
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
	// Utworzenie obiektu  pracownik1 klasy Pracownik:
	Pracownik pracownik1 = Pracownik("Aneta", "Siewniak");	
	cout << "Dane pracownika: " 
		<< pracownik1.getImie() << " " << pracownik1.getNazwisko() << endl;
	
	// Utworzenie obiektu pracownik2:
	Pracownik pracownik2("Izabela", "Siewniak");	
	cout << "Dane pracownika: " 
		<< pracownik2.getImie() << " " << pracownik2.getNazwisko() << endl;	
		
	return 0;
}

