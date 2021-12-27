#include <fstream>
#include <iostream>
using namespace std;

int main()
{
float a, b;
ifstream wejscie("prostokatt.txt");

	if (!wejscie)
	{
		cout<<"nie mozna otworzyc pliku";
	return 0;
	}

wejscie>>a>>b;
wejscie.close();
cout<<"Pole prostokata wynosi: "<<a*b;


return 0;
}
