
/* UWAGA
	Kazda nazwa zmiennej tablicowej jest wskaznikiem jej pierwszego elementu.
	Jezeli np.:

	float tablica[10];
	float *wsk;

	to zapis wsk = tablica jest rownowazny zapisowi wsk = &tablica[0] .
	Operator & w wyrazeniu powyzej nazywany jest operatorem adresu (address
	operator) albo operatorem wyluskiwania adresu (address dereferency operaotor).
	
	Jezeli WSKAZNIK wskazuje na i-ty element tablicy (czyli wsk == &tablica[i]),
	to z definicji (wsk + 1) wskazuje na (i + 1) element tablicy, 
	a wskaznik (wsk + n) - na element (i + n).	

	Zgodnie z arytmetyka dzialan na wskaznikach, w ktorej zawsze nastepuje 
	skalowanie rozmiarem obiektu wskazywanego
	a) zapis *(wsk + i) jest rownowazny zapisowi tablica[i] ,
	b) a zapis: (wsk + i) jest rownowazny wyrazeniu &tablica[i] .
	Operator * w wyrazeniu w podpunkcie a), w ktorym nastepuje odwolanie sie
	do zawartosci obszaru pamieci wskazywanego przez wskaznik nazywa sie
	operatorem wyluskania (dereferency operator).
	
	Wobec tej rownowaznosci, dostep do elementow tablicy moze nastepowac nie tylko 
	za pomoca indeksowania, ale takze przy wykorzystaniu arytmetyki wskaznika. 

	Jak wspomniano wyzej, zapis  *(wsk+i) jest rownowazny zapisowi tablica[i].
	Ponadto, zapis wsk[i] jest rownowazny zapisowi *(wsk+i), czyli tablica[i].
		

	Na wskaznikach mozna wykonac nastepujace operacje:
	- dodawanie:
		dodanie liczby calkowitej k do wskaznika powoduje przesuniecie tego wskaznika
		o k elementow w kierunku konca tablicy (nastepuje przy tym automatyczne skalowanie).
	- odejmowanie
	- porownywanie
	Powyzsze operacje sa wykonywane z uwzglednieniem rozmiaru obiektu (w bajtach), 
	ktorego dotyczy wskaznik - SKALOWANIE.

	Zmiennej wskaznikowej (wskaznikowi) moze byc przypisana wartosc innej zmiennej 
	wskaznikowej (czyli innego wskaznika) tego samego typu.
	*/

#include <iostream>
#include <string>

using namespace std;

main() {
	const int n = 5; // rozmiar tablicy

	// Deklaracja zmiennej tablicowej o nazwie tablica typu rzeczywistego double
	// o rozmiarze n (=5).
	double tablica[n];
	/* UWAGA
	 * Zmienna tablica jest zmienna statyczna, czyli pamietana na stosie (stack).
	 * Alokacja pamieci na stosie odbywa sie automatycznie, poniewaz kompilator
	 * juz w czasie kompilacji wie jaka pamiec nalezy zarezerwowac dla kazdej
	 * zmiennej w programie.
	 * W momencie wywolania danej funkcji wartosci jej zmiennych (i argumentow)
	 * se zapisywane do zarezerwowanych dla nich wczesniej odpowiednich obszarow.
	 * Po zakonczeniu dzialania funkcji, pamiec dla jej zmiennych lokalnych jest
	 * zwalniana.
	 */
	
	// Deklaracja wskaznika na dana typu duble:
	double *wsk;

	// Przypisanie wskaznikowi adresu pierwszego elementu tablicy
	wsk = tablica; 	
	/* UWAGA
	 * W nazwie zmiennej tablicowej pamietany jest adres elementu o indeksie 0.
	 * Tym samym wyrazenia: 
	 * 		wsk = &tablica[0];
	 * oraz 
	 * 		wsk = tablica;
	 * sa sobie rownowazne.
	 */
	 
	cout << "Podaj wartosci " << n << " elementow tablicy:" << endl;
	for (int i = 0; i < n; i++) {
	   cout << " tablica[" << i << "] = "; 
	   cin >> *(wsk + i); // rownowazne zapisowi: cin >> tablica[i];
	  }

	double suma = 0;
	// Obliczenie sumy elementow zapisanych w tablicy:
	for (int i = 0; i < n; i++) {   
	   suma += wsk[i]; // rownowazne wyrazeniu: suma += tablica[i];
	  }

	cout << "Suma elementow tablicy wynosi: " << suma << endl;
	
	return 0;
}