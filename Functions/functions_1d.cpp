#include <iostream>
#include <string>

using namespace std;


// Prototyp (deklaracja funkcji) wyswietlIDE():
void wyswietlIDE(string, string);

// Definicja funkcji wyswietlIDE():
void wyswietlIDE(string pFirma = "Microsoft", // parametr domyslny funkcji
	string pNazwa = "Visual Studio", // parametr domyslny funkcji
	string pWersja = "Community") // parametr domyslny funkcji
{
	cout << "IDE: " << pFirma << " " << pNazwa << " " << pWersja << endl;
}


int main() {
	// Wywolanie funkcji wyswietlIDE():
	wyswietlIDE();
	/* UWAGA
	* Ze wzgledu na fakt, ze funkcja zostala wywolana bez zadnych argumentow
	* arumentami (domyslnymi) staja sie automatycznie wartosci parametrow domyslnych.
	*/


	string firma = "JetBrains";
	string nazwa = "IntelliJ";
	string wersja = "Ultimate";

	// Wywolanie funkcji wyswietlIDE z argumentami zadanymi:
	wyswietlIDE(firma, nazwa, wersja);
	/* UWAGA
	* Wywolanie funkcji wyswietlIDE() powyzej nastepuje z arumentami zadanymi.
	* W zwiazku z tym, wszystkie argumenty domyslne zostaja nadpisane przez arumenty zadane.
	*/

	return 0;
}
