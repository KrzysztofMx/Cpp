
#include <iostream>
#include <string>

using namespace std;

main() {
	const int n = 5; // rozmiar tablicy

	// Deklaracja wskaźnika wsk, który może wskazywać na dane typu double:
	double *wsk;
	
	// Dynamiczny przydział pamięci na stercie (heap) dla danej typu tablicowego
	// n-elementowego rzeczywistego (double):
	wsk = new double[n];	
	 
	// Przetwarzanie tablicy dynamicznej: 
	cout << "Podaj wartości " << n << " elementów tablicy:" << endl;
	for (int i = 0; i < n; i++) {
	   cout << " tablica[" << i << "] = "; 
	   cin >> wsk[i]; // równoważne zapisowi cin >> *(wsk + i);	  
	  }

	double suma{0}; 
	/* UWAGA
	 * Powyżej zaprezentowano nowy sposób inicjacji zmiennych dostępny w C++11
	 * przy użyciu listy inicjującej (initializer list):
	 * W starszych wersjach należałoby użyć instrukcji:
	 * 		double suma = 0;
	 * lub
	 * 		double suma(0);
	 */
	
	
	// Obliczenie sumy elementów zapisanych w tablicy:
	for (int i = 0; i < n; i++) {   
	   suma += wsk[i]; // równoważne zapisowi: suma += *(wsk + i);
	  }

	// Zwolnienie pamięci przydzielonej dyamicznie dla tablicy wskazywanej przez
	// wskaźnik wsk:
	delete[] wsk;

	cout << "Suma elementów tablicy wynosi: " << suma << endl;
	return 0;
}