
/* UWAGA
 * Konstruktor jest specjalną funkcją członkowską klasy (class member function) - 
 * metodą, która jest wywoływana automatycznie w sytuacji, w której jest tworzony nowy obiekt
 * należący do tej klasy (obiekt będący instancją klasy).
 * Oprócz tworzenia nowych obiektów jako instancji klasy, konstruktory są wykorzystywane do inicjacji
 * (nadania wartości początkowych) polom obiektu - zmiennym z danymi (data members), a czasem również
 * innych działań.
 * 
 * Nazwa konstruktora jest taka sama, jak nazwa klasy.
 * Konstruktor nie zwraca żadnej/żadnych wartości.
 * Konstruktor jest metodą publiczną.
 * 
 * Konstruktor może posiadać parametry wejściowe lub nie.
 * Konstruktor bezparametrowy (lub konstruktor, który posiada parametry przyjmujące wyłącznie 
 * wartości domyślne) nazywany jest konstruktorem domyślnym (default constructor).
 */
#include <iostream>
#include <string>

using namespace std; 

class Pracownik {
private:
	// Deklaracje prywatnych pól (zmiennych) członkowskich:
	string imie = "wartość_domyślna_imienia";
	string nazwisko= "wartość_domyślna_nazwiska";
	/* UWAGA
	 * Prywatne pola zostały zainicjowane wartościami domyślnymi.
	 */
	
public:	
	// Deklaracje publicznych metod (funkcji członkowskich):
	string getImie() {
		return imie;
	}
	void setImie(string pImie) {
		imie = pImie;
	}
	string getNazwisko()	{
		return nazwisko;
	}
	void setNazwisko(string pNazwisko) {
		nazwisko = pNazwisko;
	}	
	/* UWAGA
	 * Należy zwrocić uwagę na fakt, że wewnątrz klasy nie jest zawarta definicja żadnego konstruktora.
	 * Pomimo tego można korzystać z konstruktora domyślnego (bezparametrowego), którego nie ma potrzeby 
	 * definiować. 
	 * Konstruktor domyślny jest tworzony automatycznie i niejawnie pod warunkiem, że w klasie nie został
	 * zdefiniowany inny konstruktor, np. konstruktor z parametrami (parametrized constructor).
	 */ 
};
	
int main() {	
	// Utworzenie obiektu pracownik klasy Pracownik:
	Pracownik pracownik;
	/* UWAGA
	 * Ze względu na fakt, że w klasie Pracownik nie zdefiniowano żadnego konstruktora,
	 * podczas tworzenia obiektu pracownik następuje automatyczne wywołanie konstruktora 
	 * domyślnego (bezparametrowego).
	 * Pola obiektu zostają w tym przypadku zainicjowane wartościami domyślnymi.
	 */
	
	// Odczyt wartości prywatnych pól obiektu pracownik przy wykorzystaniu getterów: 
	cout << "Dane pracownika: " 
		<< pracownik.getImie() << " " << pracownik.getNazwisko() << endl;
	
	// Nadanie wartości prywatnym polom obiektu za pomocą publicznych setterów:
	pracownik.setImie("Piotr");
	pracownik.setNazwisko("Siewniak");
	
	// Odczyt wartości prywatnych pól obiektu:
	cout << "Dane pracownika: " 
		<< pracownik.getImie() << " " << pracownik.getNazwisko() << endl;
		
	return 0;
}
