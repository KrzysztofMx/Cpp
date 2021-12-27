
#include <iostream>
#include <string>

using namespace std;

main()
{
	const int n = 5; // rozmiar tablicy

	double tablica[n];
	double *wsk;	
		 
	cout << "Podaj wartosci " << n << " elementow tablicy:" << endl;
	
	// Przypisanie wskaznikowi adresu pierwszego elementu tablicy
	wsk = tablica; 	// rownowazne zapisowi: wsk = &tablica[0]
	
	// Wprowadzenie wartosci elementow tablicy z klawiatury:
	for (int i = 0; i < n; i++) {
	   cout << " tablica[" << i << "] = "; 
	   cin >> *wsk; // rownowazne wyrazeniu: cin >> tablica[i];
	   
	   // Przesuniecie wskaznika przed nastepny element tablicy:
	   wsk++;
	  }

	
	// Przesuniecie wskaznika przed pierwszy element tablicy:
	wsk = tablica; // wsk = &tablica[0]
	
	double suma = 0;
	// Obliczenie sumy elementow zapisanych w tablicy:
	for (int i = 0; i < n; i++) {   
	   suma += wsk[i];  // rownowazne: suma += *wsk;
						// rownowazne: suma += tablica[i];	  
	}

	cout << "Suma elementow tablicy wynosi: " << suma << endl;
	return 0;
}