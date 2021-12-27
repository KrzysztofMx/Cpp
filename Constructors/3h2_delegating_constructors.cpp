#include <iostream>
#include <string>

using namespace std; 

class Prostokat {
private:
	double bok1 {0}; 
	double bok2 {0}; 
		
public:
	// PROTOTYPY KONSTRUKTORÓW
	// Deklaracja (prototyp) konstruktora domyślnego:
	Prostokat();
	// Deklaracja konstruktora z parametrami:
	Prostokat(double, double);	

	// Deklaracje metod publicznych:
	void getParameters(double&, double&);
	void setParameters(double, double);		
};
	
// Definicje konstruktorów:	
Prostokat::Prostokat() {
	cout << "Konstruktor klasy Prostokat został wywołany ..." 
	<< endl;
	cout << "Obiekt klasy Protokat został utworzony ..." << endl;
}

// Definicja konstruktora z parametrami z delegacją do innego konstruktora:
Prostokat::Prostokat(double pBok1, double pBok2) : Prostokat::Prostokat() {
	bok1 = pBok1;
	bok2 = pBok2;
}


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
	// Utworzenie obiektu poprzez niejawne wywołanie konstruktora domyślnego: 
	Prostokat p1;
	
	double b1, b2; // zmienne odpowiadające bokom prostokąta
	p1.getParameters(b1, b2);
	cout << "Parametry prostokata: " << b1 << ", " << b2 << endl;	
	
	// Utworzenie drugiego obiektu poprzez jawne wywołanie konstruktora z parametrami:
	Prostokat p2 = Prostokat(1.5, 2.0);
		
	p2.getParameters(b1, b2);	
	cout << "Parametry prostokąta: " << b1 << ", " << b2 << endl;
	
	return 0;
}
