#include <iostream>
#include <cmath>
using namespace std; 

// Definicja szablonu:
template <typename T> 
T srednia(T wyklad, T cwiczenia, T laboratorium, T seminarium) {
    return (
		wyklad + cwiczenia + laboratorium + seminarium) / 4;
}
// Definicja specjalizowanej wersji szablonu funkcji:
template <> 
double srednia(
double wyklad, double cwiczenia, double laboratorium, double seminarium) { 
    return (
		round(wyklad) + round(cwiczenia) + round(laboratorium) + round(seminarium)) / 4;
}
// Definicja specjalizowanej wersji szablonu funkcji:
template <> 
float srednia(float wyklad, float cwiczenia, float laboratorium, float seminarium) { 
    return (
		round(wyklad) + round(cwiczenia) + round(laboratorium) + round(seminarium)) / 4;
}

int main() {    
    cout << "Średnia z ocen: " << srednia(3, 4, 3, 4) << endl;    
    cout << "Średnia z ocen: " << srednia<double>(3, 4, 3, 4) << endl;        
    cout << "Średnia z ocen: " << srednia(3.0, 4.0, 3.0, 4.0) << endl;    

    return 0;
}
