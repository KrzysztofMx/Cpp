// Elementy składowe (metody) pozwalają na przeliczenie jednostek długości w 
// systemie SI na jednostki długości w systemie anglosaskim i odwrotnie.

#include <iostream>
#include <string>

using namespace std;

class Przeliczanie
{
public:

     double Metr;
     double Jard;
     double Mila;
     double Cal;

    double Metr_Cal(double);
    double Metr_Jard(double);
    double Metr_Mila(double);
    double Cal_Metr(double);
    double Jard_Metr(double);
    double Mila_Metr(double);


};

double Przeliczanie::Metr_Cal(double Metr){
    return Metr * 39.3700787;
    }

double Przeliczanie::Metr_Jard(double Metr){
    return Metr * 1.0936133;
    }

double Przeliczanie::Metr_Mila(double Metr){
   return Metr * 0.000621371192;
    }

double Cal_Metr(double Cal){
    return Cal / 0.0254;
    }

double Jard_Metr(double Jard){
    return Jard / 0.9144;
    }
double Mila_Metr(double Mila){
    return Mila / 1609.344;
    }


int main() {

    Przeliczanie przeliczanie1;
    int W;
    int jednostka;
    double mi;
    double jr;
    double ca;
    double metr;


       cout<<"Wybierz jednostke ktora chcesz przeliczyc "<<endl;
       std::cout << "[1] Metr na Mila" << std::endl;
       std::cout << "[2] Metr na Jard" << std::endl;
       std::cout << "[3] Metr na Cal" << std::endl;
       std::cout << "[4] Cal na Metr" << std::endl;
       std::cout << "[5] Jard na Metr" << std::endl;
       std::cout << "[6] Mila na Metr" << std::endl;
    cin>>W;



    switch (W)
    {
    case 1:

        std::cout << "Podaj Metry" << std::endl;
        cin>>metr;
        mi = przeliczanie1.Metr_Mila(metr);
        std::cout << "Mila = "<<mi<<std::endl;

        break;

    case 2:
        std::cout << "Podaj Metry" << std::endl;
        cin>>metr;
        jr=przeliczanie1.Metr_Jard(metr);
        std::cout << "Jard = "<<jr<<std::endl;
        break;

    case 3:
        std::cout << "Podaj Metry" << std::endl;
        cin>>metr;
        ca=przeliczanie1.Metr_Cal(metr);
        std::cout << "Cal = "<<ca<<std::endl;
        break;

    case 4:
        std::cout << "Podaj ilosc Cali" << std::endl;
        cin>>ca;
        metr=Cal_Metr(ca);
        std::cout << "metr= "<<ca<< std::endl;
        break;

    case 5:
        std::cout << "Podaj ilosc Jardow" << std::endl;
        cin>>jr;
        metr=Jard_Metr(jr);
        std::cout << "metr= "<<jr<< std::endl;
        break;

    case 6:
        std::cout << "Podaj ilosc Mili" << std::endl;
        cin>>mi;
        metr=Mila_Metr(mi);
        std::cout << "metr= "<<mi<< std::endl;
        break;
    default:
        break;
    }
    return 0;
}
