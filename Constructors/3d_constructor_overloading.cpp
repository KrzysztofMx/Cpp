#include <iostream>
#include <string>

using namespace std; 

class Prostokat {
private:
	double bok1 = 0; // deklaracja zmiennej członkowskiej i nadanie jej wartości domyślnej
	double bok2 {0}; // deklaracja zmiennej członkowskiej i nadanie jej wartości domyślnej w inny sposób	
		
public:
	// Deklaracje konstruktorów:
	Prostokat();
	Prostokat(double, double);
	/* UWAGA
	 * Konstruktory, których deklaracje (nagłówki) zostały zamieszczone w definicji klasy
	 * zostały przeciążone (overloading).
	 * W ogólnym przypadku, nagłówki przeciążonych konstruktorów mogą się różnić od siebie 
	 * liczbą i/lub typem parametrów.	
	 */

	// Deklaracje metod publicznych:
	void getParameters(double&, double&);
	void setParameters(double, double);		
};
	
// Definicje konstruktorów:	
Prostokat::Prostokat() {}
Prostokat::Prostokat(double pBok1, double pBok2) {
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
	// Utworzenie obiektu poprzez jawne wywołanie konstruktora domyślnego: 
	Prostokat p1 = Prostokat();	// lub Prostokat p1;
	/* UWAGA
	 * Kompilator automatycznie wybierze odpowiednią wersję konstruktora, 
	 * dopasowaną do liczby argumentów i ich typów.
	 */
	
	double b1, b2; // zmienne odpowiadające bokom prostokąta
	p1.getParameters(b1, b2);
	cout << "Parametry prostokata: " << b1 << ", " << b2 << endl;	
	
	// Utworzenie drugiego obiektu poprzez jawne wywołanie konstruktora:
	Prostokat p2 = Prostokat(1.5, 2.0);
	/* UWAGA
	 * Kompilator automatycznie wybierze odpowiednią wersję konstruktora, 
	 * dopasowaną do liczby argumentów i ich typów.
	 */
	
	p2.getParameters(b1, b2);	
	cout << "Parametry prostokąta: " << b1 << ", " << b2 << endl;
	
	return 0;
}
