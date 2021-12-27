
/* UWAGA
* Funkcja rekurencyjna (recursion function) to taka, ktora w ciele (body) wywoluje sama siebie.
*/

#include <iostream>

using namespace std;

// Definicja funkcji rekurencyjnej:
int nwd(int pLiczba1, int pLiczba2) {
	int temp;
	if (pLiczba2 == 0) temp = pLiczba1;
	// Warunkowe wywo�anie funkcji nwd w "samej siebie":
	else temp = nwd(pLiczba2, pLiczba1 % pLiczba2);

	return temp;
}
/* UWAGA
* Funkcja gcd() zdefiniowana powyzej realizuje algorytm Euklidesa w celu znalezienia najwi�kszego
* wspolnego dzielnika (NWD) dwoch liczb calkowitych.
*/


int main() {
	// Pierwsza liczba:
	int liczba1 = 12;
	cout << "Pierwsza liczba = " << liczba1 << endl;

	// Druga liczba:
	int liczba2 = 18;
	cout << "Druga liczba = " << liczba2 << endl;

	// Wywo�anie funkcji rekurencyjnej:
	int dzielnik = nwd(liczba1, liczba2);
	cout << "NWD (najwiekszy wspolny dzielnik): " << dzielnik << endl;

	return 0;
}