#include <iostream>
#include <cmath>
using namespace std; 

// Definicja szablonu klasy:
template <class T>
class Oceny {
public:    
    Oceny() {
        cout << "Wywołanie konstruktora klasy ogólnej ..." << endl;
    }    
    T wyklad;
    T cwiczenia;
    T laboratorium;
    T seminarium;    
    T srednia () {
        return (wyklad + cwiczenia + laboratorium + seminarium) / 4;        
    }    
};
// Definicja specjalizacji szablonu klasy:
template <> class 
Oceny <double> { 
public:     
    Oceny() {
        cout << "Wywołanie konstruktora klasy specjalizowanej ..." << endl;
    }    
    double wyklad;
    double cwiczenia;
    double laboratorium;
    double seminarium;    
    double srednia () {
        return ( round(wyklad) + 
                 round(cwiczenia) + 
                 round(laboratorium) +
                 round(seminarium)) / 4;
    }    
};

int main() {    
    Oceny<int> oceny1 = Oceny<int>(); 
    oceny1.wyklad = 3;
    oceny1.cwiczenia = 4;
    oceny1.laboratorium = 3;
    oceny1.seminarium = 4;
    cout << "Średnia ocen semestralnych: " << oceny1.srednia() << endl;
            
    Oceny<double> oceny2; 
    oceny2.wyklad = 3.0;
    oceny2.cwiczenia = 4.0;
    oceny2.laboratorium = 3.0;
    oceny2.seminarium = 4.0;
    cout << "Średnia ocen semestralnych: " << oceny2.srednia() << endl;

    return 0;
}
