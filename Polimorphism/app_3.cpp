#include <iostream>
#include <string>

using namespace std; 

// Definicja klasy bazowej:
class Pracownik {
public:
	// Prototyp metody publicznej:
	void zwrocDane(); 
};

// Definicja klasy pochodnej:
class Nauczyciel: public Pracownik {
public:	
	// Prototyp metody publicznej:
	void zwrocDane();	
};

// Definicja klasy pochodnej:
class Wychowawca: public Nauczyciel {
public:	
	// Prototyp metody publicznej:
	void zwrocDane();	
};
/* UWAGA
 * W każdej z klas wchodzących w skład struktury dziedziczenia zadeklarowano metodę publiczną 
 * o takiej samej nazwie, identycznych parametrach (liczbie i typie) oraz typie zwracanej wartości.
 * 
 * Jednocześnie, w żadnej z tych klas wchodzących nie zadeklarowano metody wirtualnej (virtual).
 */

// Definicje metod publicznych, które zostały zadeklarowane w klasach zdefiniowanych powyżej:		
void Pracownik::zwrocDane() {
	cout << "Dane zwrócone przez metodę z klasy Pracownik" << endl;
}
void Nauczyciel::zwrocDane() {
	cout << "Dane zwrócone przez metodę z klasy Nauczyciel" << endl;
}
void Wychowawca::zwrocDane() {
	cout << "Dane zwrócone przez metodę z klasy Wychowawca" << endl;
}
/* UWAGA
 * Jak wspomniano powyżej, w każdej z klas struktury dziedziczenia zdefiniowano metodę, 
 * która ma identyczną nazwę, identyczną liczbę i typ parametrów (tutaj: brak parametrów)
 * oraz typ zwracanej wartości.
 * Jednakże, implementacja (i co za tym idzie funkcjonalność) każdej z tych metod jest dowolna.
 */
	
int main() {
	// Deklaracja wskaźnika typu (statycznego) Pracownik:
	Pracownik *wsk_pracownik;
	/* UWAGA
	 * Zmienna wsk_pracownik jest zmienną statyczną, która może wskazywać (z definicji) na obiekty
	 * typu Pracownik oraz obiekty klas pochodnych klasy Pracownik, czyli obiekty klas Nauczyciel 
	 * i Wychowawca.
	 * 
	 * Powyższe wynika z ważnej cechy ogólnej programowania obiektowego:
	 * "wskaźnik typu statycznego klasy podstawowej (tutaj Pracownik) może wskazywać na obiekty 
	 * klas pochodnych tej klasy bazowej (tutaj: Nauczyciel i Wychowawca)".
	 */	
		
	// Utworzenie obiektu pracownik1, jako instancji klasy Pracownik:
	Pracownik pracownik1 = Pracownik(); // lub krótko: Pracownik pracownik1;
	/* UWAGA
	 * Obiekt pracownik1 został utworzony jako skutek wywołania konstruktora domyślnego.
	 */	
	
	// Przypisanie wskaźnikowi adresu obiektu pracownik1:
	wsk_pracownik = &pracownik1;			
	wsk_pracownik->zwrocDane(); // zostanie wywołana metoda z klasy bazowej Pracownik
	
	// Utworzenie obiektu pracownik2, jako instancji klasy Nauczyciel:
	Nauczyciel pracownik2 = Nauczyciel(); // lub krótko: Nuaczyciel pracownik2;
	// Przypisanie wskaźnikowi adresu obiektu pracownik2:
	wsk_pracownik = &pracownik2;			
	wsk_pracownik->zwrocDane(); // zostanie wywołana metoda z klasy bazowej Pracownik
	/* UWAGA
	 * Pytanie: 
	 * dlaczego została wywołana metoda zwrocDane() zdefiniowana w klasie bazowej Pracownik,
	 * a nie w klasie pochodnej Nauczyciel?
	 * Odpowiedź:
	 * Jeżeli daną metodę w klasie bazowej, która ma być przesłonięta (overriding) w klasie 
	 * pochodnej nie zdefiniowano jako wirtualnej, wówczas kompilator już na etapie kompilacji
	 * ustali do wykonania metodę zdefiniowaną w klasie zgodnej z typem statycznym wskaźnika 
	 * (tutaj Pracownik) - czyli metodę zdefiniowaną w klasie bazowej Pracownik.
	 * Innymi słowy, jeśli metoda w klasie bazowej nie jest witualna, to przypisanie (wybór) metody 
	 * do wykonania następuje już na etapie kompilacji. Decyduje o tym typ statyczny wskaźnika.		
	 * 
	 * Powiązanie wskaźnika z jego typem statycznym nazywa się wiązaniem statycznym
	 * (static linkage) lub inaczej wiązaniem wczesnym (early binding) - polimorfizm w czasie
	 * kompilacji (compile-time binding).
	 */
	
	// Utworzenie obiektu pracownik3, jako instancji klasy Wychowawca:
	Wychowawca pracownik3 = Wychowawca(); // lub krótko: Wychowawca pracownik3;
	// Przypisanie wskaźnikowi adresu obiektu pracownik3:
	wsk_pracownik = &pracownik3;	
	wsk_pracownik->zwrocDane(); // zostanie wywołana metoda z klasy bazowej Pracownik
		
	return 0;
}

