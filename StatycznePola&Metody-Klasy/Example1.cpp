#include <iostream>
#include <string>

using namespace std;

class Prostopadloscian {

	double bok1 = 0;
	double bok2 = 0;
	double bok3 = 0;

public:

	void setBok1(double pBok1){		//Seter
		bok1 = pBok1;}
	double getBok1(){				//Getter
		return bok1;}

	void setBok2(double pBok2){
		bok2 = pBok2;}
	double getBok2(){
		return bok2;}

    void setBok3(double pBok3){
		bok3 = pBok3;}
	double getBok3(){
		return bok3;}
	

};

int main() {

	Prostopadloscian prostopadloscian;
    double a, b, c;
    std::cout << "Podaj bok a " << std::endl;
    cin>>a;
    std::cout << "Podaj bok b " << std::endl;
    cin>>b;
    std::cout << "Podaj bok c " << std::endl;
    cin>>c;

	prostopadloscian.setBok1(a);
	prostopadloscian.setBok2(b);
	prostopadloscian.setBok3(c);

	cout << "Dane : A= "<< prostopadloscian.getBok1() <<" B= "<< prostopadloscian.getBok2()<< " C= " << prostopadloscian.getBok3() << endl;
}

