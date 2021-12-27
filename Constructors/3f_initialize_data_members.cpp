#include <iostream>
#include <string>

using namespace std; 

class Prostokat {
private:
	double bok1, bok2; // zmienne członkowskie (data members)
		
public:
	// Deklaracje (prototypy) konstruktorów:
	Prostokat(); // konstruktor domyślny
	Prostokat(double, double);	

	// Deklaracje (prototypy) metod publicznych:
	void getParameters(double&, double&);
	void setParameters(double, double);		
};
	
// Definicje konstruktorów:	
Prostokat::Prostokat() {} // definicja konstruktora domyślnego
Prostokat::Prostokat(double pBok1, double pBok2) {
	bok1 = pBok1;
	bok2 = pBok2;
}
/* UWAGA
 * Definicja konstruktora z parametrami (jak powyżej) może również przyjmować inne postacie,
 * które podobnie jak powyższa pozwalają na inicjację zmiennych członkowskich obiektu:
 * Inna postać:
 *		Prostokat::Prostokat(double pBok1, double pBok2) : bok1(pBok1) {	
			bok2 = pBok2;
		} 
 * Jeszcze inna postać:
 *		Prostokat::Prostokat(double pBok1, double pBok2) : bok1(pBok1), bok2(pBok2) {				
		} 
 */ 

// Definicje metod publicznych należących do klasy:	
void Prostokat::getParameters(double &pBok1, double &pBok2) {
	pBok1 = bok1;
	pBok2 = bok2;
}
void Prostokat::setParameters(double pBok1, double pBok2) {
	bok1 = pBok1;
	bok2 = pBok2;
}


int main() {	
	double b1, b2; // zmienne pomocnicze
			
	// Utworzenie obiektu poprzez jawne wywołanie konstruktora połączone z inicjacją jego zmiennych
	// członkowskich (data members):
	Prostokat p2 = Prostokat(1.5, 2.0);	
	
	p2.getParameters(b1, b2);	
	cout << "Parametry prostokąta: " << b1 << ", " << b2 << endl;
	
	return 0;
}
