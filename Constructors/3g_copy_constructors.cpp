/* UWAGA
 * Konstruktor kopiujący (copy constructor) to przeciążony (overloaded) konstruktor,
 * którego zadaniem jest utworzenie (deklaracja i inicjacja) obiektu należącego do
 * danej klasy na podstawie z innego obiektu, jako instancji tej klasy.
 * Nowo-tworzony obiekt powienin być identyczny do wzorca (oryginału) i jednocześnie
 * powinien być od niego całkowicie niezależny (rozłączny). 
 * 
 * Jeśli progamista nie zdefiniuje własnego konstruktora domyślnego, wówczas kompilator
 * automatycznie utworzy konstruktor domyślny. Przy tym, jest to niezależne od tego,
 * czy programista zdefiniował inne konstruktory, czy nie.
 */

#include <iostream>
#include <string>

using namespace std; 

// Definicja klasy:
class Prostokat {
private:
	double bok1;
	double bok2;
		
public:
	// Deklaracje konstruktorów:
	Prostokat(); // kosntruktor domyślny
	Prostokat(double, double); // konstruktor z parametrami
	/* UWAGA
	 * Konstruktory, których deklaracje (nagłówki) zostały zamieszczone w definicji klasy
	 * zostały przeciążone (overloading).
	 * W ogólnym przypadku, nagłówki przeciążonych konstruktorów mogą się różnić od siebie 
	 * liczbą i/lub typem parametrów.	
	 */
	 
	 Prostokat(const Prostokat &); // konstruktor kopiujący
	
	// Deklaracje metod publicznych:
	void getParameters(double&, double&);
	void setParameters(double, double);

	double pole();
	double obwod();
};
	
// Definicje konstruktorów:	
Prostokat::Prostokat() {
	cout << "Nastąpiło wywołanie konstruktora domyślnego ..." << endl;
}
Prostokat::Prostokat(double pBok1, double pBok2) {
	cout << "Nastąpiło wywołanie zwykłego konstruktora z parametrami ..." << endl;
	bok1 = pBok1;
	bok2 = pBok2;	
}

// Definicja konstruktora kopiującego:
Prostokat::Prostokat(const Prostokat &istniejacy_prostokat) {
	cout << "Nastąpiło wywołanie konstruktora kopiującego ..." << endl;
	bok1 = istniejacy_prostokat.bok1;
	bok2 = istniejacy_prostokat.bok2;	
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

double Prostokat::pole() {
	return bok1 * bok2;
}
double Prostokat::obwod() {
	return 2 * bok1 + 2 * bok2;
}

// Definicja funkcji niezależnej od klasy Prostokat:
Prostokat fCopy(Prostokat prostokat) {
   return prostokat;
}
/* UWAGA
 * Parametrem funkcji jest obiekt klasy Prostokat, który jest przekazywany do fukcji przez
 * wartość (value), a nie przez referencję (reference), czy wskaźnik (pointer).
 * Zatem, na stosie (stack) zostanie wykonana kopia obiektu - argumentu wywołania funkcji.
 * 
 * Dodatkowo funkcja zwraca na zewnątrz obiekt typu Prostokat. Tym samym, na stosie 
 * ponownie zostanie wykonana kopia obiektu.
 */

int main() {	
	double b1, b2;
	
	// Utworzenie obiektu poprzez jawne wywołanie konstruktora z parametrami: 
	Prostokat p1(1, 2); // równoważne zapisowi: Prostokat p1 = Prostokat(1, 2);		
	p1.getParameters(b1, b2);
	cout << "PIERWSZY PROSTOKĄT" << endl;	
	cout << "bok1 = " << b1 << endl;
	cout << "bok2 = " << b2 << endl; 	
	
	// Utworzenie obiektu p2 na podstawie obiektu p1:
	Prostokat p2 = p1; 
	/* UWAGA
	 * Powyżej, na stosie tworzony jest nowy obiekt (p2), jako kopia istniejącego już
	 * obiektu p1. Konstruktor kopiujący jest wywoływany niejawnie (implicit).
	 */
	p2.getParameters(b1, b2);
	cout << "DRUGI PROSTOKĄT" << endl;	
	cout << "bok1 = " << b1 << endl;
	cout << "bok2 = " << b2 << endl; 
	
	// Utworzenie obiektu p3 na podstawie obiektu p1:
	Prostokat p3(p1); 
	/* UWAGA
	 * Powyżej, na stosie tworzony jest nowy obiekt (p3), jako kopia istniejącego już
	 * obiektu p1. Konstruktor kopiujący jest wywoływany jawnie (explicit).
	 */
	p3.getParameters(b1, b2);
	cout << "TRZECI PROSTOKĄT" << endl;	
	cout << "bok1 = " << b1 << endl;
	cout << "bok2 = " << b2 << endl; 
	
	// Utworzenie obiektu p4 poprzez użycie zwykłego konstruktora domyślnego:
	Prostokat p4; 
	// Skopiowanie obiektu p1 do obiektu p4:
	p4 = fCopy(p1);
	/* UWAGA
	 * Konstruktor domyślny zostanie w tym przypadku wywołany dwukrotnie - pierwszy raz
	 * podczas kopiowania argumentu funkcji, drugi - podczas zwracania wartości.
	 */
	p4.getParameters(b1, b2);	
	cout << "CZWARTY PROSTOKĄT" << endl;	
	cout << "bok1 = " << b1 << endl;
	cout << "bok2 = " << b2 << endl; 
	
	return 0;
}
