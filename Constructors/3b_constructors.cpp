#include <iostream>
#include <string>

using namespace std; 

class Pracownik {
private:
	string imie;
	string nazwisko;
		
public:	
	// Definicja konstruktora domyślnego (bezparametrowego)
	Pracownik() {
		imie = "wartość_domyślna_imienia";
		nazwisko = "wartość_domyślna_nazwiska";
	}
	/* UWAGA
	 * Ciało (body) konstruktora domyślnego nie musi zawierać żadnej instrukcji, np.:
	 * 		Pracownik() {}
	 */
	
	/* UWGA
	 * Jeśli w klasie zdefiniowano jawnie kontruktor z parametrami (jak tutaj),
	 * konstruktor domyślny nie jest tworzony automatycznie przez kompilator.
	 * Wówczas, jeśli istnieje potrzeba użycia konstruktora domyślnego, to należy
	 * go zdefiniować jawnie (jak tutaj).
	 */
	
	// Definicja konstruktora z parametrami (parametrized constructor):
	Pracownik(string pImie, string pNazwisko) { 
		imie = pImie;
		nazwisko = pNazwisko;
	}
			
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
	Pracownik pracownik1;
	/* UWAGA
	 * Przy tworzeniu obiektu pracownik1 wywołany został konstruktor domyślny.
	 */
	cout << "Dane pracownika: " 
		<< pracownik1.getImie() << " " << pracownik1.getNazwisko() << endl;
	
	// Utworzenie obiektu pracownik2:
	Pracownik pracownik2 = Pracownik("Aneta", "Siewniak");
	/* UWAGA
	 * Utworzenie obiektu pracownik2 nastąpiło poprzez jawne wywołanie (explicit call) 
	 * konstruktora z parametrami. 
	 * Zmienne członkowskie zostały zainicjowane wartościami podanymi jako argumenty
	 * konstruktora.
	 */
	cout << "Dane pracownika: " 
		<< pracownik2.getImie() << " " << pracownik2.getNazwisko() << endl;
	
	// Utworzenie obiektu pracownik3:
	Pracownik pracownik3("Izabela", "Siewniak");
	/* UWAGA
	 * Utworzenie obiektu pracownik3 nastąpiło poprzez niejawne wywołanie (implicit call) 
	 * konstruktora z parametrami. 
	 * Zmienne członkowskie zostały zainicjowane wartościami podanymi jako argumenty
	 * konstruktora.
	 */	
	cout << "Dane pracownika: " 
		<< pracownik3.getImie() << " " << pracownik3.getNazwisko() << endl;
		
	return 0;
}
