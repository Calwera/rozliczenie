#include "zapisywanie.h"
#include <fstream>
#include <iostream>
#include <string>


using namespace std;

 


string zapisywanie::dane = "rozliczenie.txt";

void zapisywanie::zapisz(string nazwa = dane)
{
    fstream plik;
    plik.open( dane, ios::in | ios::out );
    if( plik.good() == true )
        {
            cout << "Uzyskano dostep do pliku!" << endl;
    
        } else cout << "Dostep do pliku zostal zabroniony!" << endl;

    plik << oper1.get_sumap() << " " <<  oper1.get_sumar() << " " << oper1.get_sumap() - oper1.get_sumar();
 
plik.close();
}

void zapisywanie::odczytaj(string)
{
    fstream plik;
    plik.open( dane, ios::out);

 
     plik.close();

}
