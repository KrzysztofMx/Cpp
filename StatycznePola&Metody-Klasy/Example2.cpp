#include <iostream>
#include <string>

using namespace std;


class Dzialka {
public:
    static string Nazwa;
    static string wlasciciel;

    static void funkcja();

    double Bok1;
    double Bok2;

    Dzialka();
    Dzialka(double Bok1, double Bok2, double id);
};

string Dzialka::Nazwa = "Slaska Spolka Myslowicka";
string Dzialka::wlasciciel = "Krzysztof ";

void Dzialka::funkcja() {
    std::cout << wlasciciel << std::endl;
    std::cout << Nazwa << std::endl;
}

Dzialka::Dzialka() {
    cout << "Doyslny" << endl;
}

Dzialka::Dzialka(double Bok1, double Bok2, double id) {

    funkcja();

    cout << "numer ID dzialki :" << id << endl;
    cout << "Pole Powieszchni Dzialki :" << Bok1 * Bok2 << endl;
    cout << "Obwod Dzialki :" << (Bok1 * 2) * (Bok2 * 2) << endl;
    cout << endl;
}

int main() {

    double abok1, abok2;
    int anr;
    char Y;

    do {
        cout << "Podaj Bok 1 Dzialki :";
        cin >> abok1;
        cout << "Podaj Bok 2 Dzialki :";
        cin >> abok2;
        cout << "Podaj nr. ID Dzialki :";
        cin >> anr;
        cout << endl;

        Dzialka dzialka1(abok1, abok2, anr);

        cout << "_______________________" << endl;
        cout << "Wyjcie z programu za pomoca znaku [Y] " << endl;
        cout << "_______________________" << endl;
        cin >> Y;
    } while (toupper(Y) != 'Y');

    return 0;
}
