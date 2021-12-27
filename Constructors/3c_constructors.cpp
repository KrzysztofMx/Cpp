#include <iostream>
#include <string>

using namespace std; 

class Pracownik {
private:
	string imie;
	string nazwisko;
		
public:	
	// Deklaracja konstruktora: 	
	Pracownik(string, string); // nagłówek konstruktora parametrowego
	/* UWAGA
	 * Konstruktor został zdefiniowany na zewnątrz klasy.
	 */
	 
	 /* UWAGA
	  * Definicja klasy Pracownik nie zawiera deklaracji (definicji) konstruktora domyślnego!
	  */

	string getImie();
	void setImie(string);
	
	string getNazwisko();
	void setNazwisko(string);
	/* UWAGA
	 * Funkcje członkowskie klasy zostały zdefiniowane na zewnątrz klasy.
	 */	
};

// Definicja konstruktora z parametrami:
Pracownik::Pracownik(string pImie, string pNazwisko) {
		imie = pImie;
		nazwisko = pNazwisko;
	}
// Definicje metod (funkcji członkowskich klasy):
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
	/* UWAGA
	 * Ze względu na fakt, że w klasie Pracownik został zdefiniowany konstruktor parametrowy,
	 * a jednocześnie nie został zdefiniowany konstruktor bezparametrowy (domyślny),
	 * instrukcja:
	 * 		Pracownik pracownik1;
	 * jest błędna.
	 */
		
	// Utworzenie obiektu poprzez jawne wywołanie (explicit call) konstruktora z parametrami:
	Pracownik pracownik2 = Pracownik("Aneta", "Siewniak");		
	cout << "Dane pracownika: " 
		<< pracownik2.getImie() << " " << pracownik2.getNazwisko() << endl;
	
	// Utworzenie obiektu poprzez niejawne wywołanie (implicit call) konstruktora z parametrami:
	Pracownik pracownik3("Izabela", "Siewniak");	
	cout << "Dane pracownika: " 
		<< pracownik3.getImie() << " " << pracownik3.getNazwisko() << endl;	

	return 0;
}
