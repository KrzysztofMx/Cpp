#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
using namespace std;
int main()
{
	fstream plik1;
	
	plik1.open("slowa.txt",ios::in);
	string linia1;
	if(plik1.good()==false){ 
        cout<<"Nie mozna otworzyc pliku!";
    }
		for (int i=1; i<=12; i++)
		{
			getline(plik1, linia1);
			cout<<linia1<<endl;	
		}
	
	
	plik1.close();

}
