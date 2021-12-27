#include <iostream>
using namespace std; 

// Definicja szablonu klasy:
template <class T, int n> 
class Oceny {
public:
    T oceny[n]; 
    T max() { 
        T temp = oceny[0];
        for (int i = 0; i < n; i++ ) {
            if (oceny[i] > temp) temp = oceny[i];
        }
        return temp;
    }
    T min() { 
        T temp = oceny[0];
        for (int i = 0; i < n; i++ ) {
            if (oceny[i] < temp) temp = oceny[i];
        }
        return temp;
    }    
};

int main() {    
    Oceny<int, 3> oceny {3, 5, 4};    
    cout << "Najwyższa z ocen: " << oceny.max() << endl;
    cout << "Najniższa z ocen: " << oceny.min() << endl;

    return 0;
}
