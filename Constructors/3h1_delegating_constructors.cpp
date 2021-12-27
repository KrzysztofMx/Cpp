/* UWAGA
 * Delegowanie konstruktorów (delegating constructors) - inaczej: łączenie konstruktorów
 * (constructor chaining) - polega na wywołaniu przez dany konstruktor klasy innego 
 * konstruktora tej klasy.
 * W praktyce delegowanie konstruktorów stosuje się, aby uniknąć powielanie tego samego kodu
 * w kilku konstruktorach.
 * 
 * W wielu sytuacjach (np. jak tutaj) delegowania konstruktorów można uniknąć. 
 * W tym celu wspólny kod kilku konstruktorów należy umieścić w dodatkowej funkcji
 * pełniącej wyłącznie rolę pomocniczą, a następnie wywołać tę funkcję w zdefiniowanych
 * konstruktorach klasy.
 */
#include <iostream>
using namespace std;

class Prostokat {
private:
	double bok1 {0}; // styl C++11 (lub double bok1 = 0; styl C++98)
	double bok2 {0};
	
	// Definicja prywatnej funkcji członkowskiej:
	void info() {
		cout << "Konstruktor klasy Prostokat został wywołany ..." << endl
		<< "i obiekt klasy Protokat został utworzony ..." << endl;
	}	
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
	// Wywołanie funkcji pomocniczej z określoną funkcjonalnością:
	info();
}
Prostokat::Prostokat(double pBok1, double pBok2) {
	bok1 = pBok1;
	bok2 = pBok2;
	// Wywołanie funkcji pomocniczej z określoną funkcjonalnością:
	info();
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
