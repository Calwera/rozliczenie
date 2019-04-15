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
     // trzeba się zastanowić w jaki sposób zapisać dane do pliku i które dane grupujemy
     // czy tylko rozchody i przychody(miesieczne czy całe sumy) czy również pojedyńcze koszta
    
        } else cout << "nie uzyskanu dostępu do pliku danych" << endl;

    plik << oper1.get_sumap() << " " <<  oper1.get_sumar() << " " << oper1.get_sumap() - oper1.get_sumar();
 
plik.close();
}

void zapisywanie::odczytaj(string nazwa = dane)
{
    fstream plik;
    plik.open( dane, ios::in | ios::out );
    if( plik.good() == true )
        {
            cout << "Uzyskano dostep do pliku!" << endl;
    
        } else cout << "nie uzyskanu dostępu do pliku danych" << endl;
   
      //tu akurat nie widzę dużych problemów bo tylko przesyłamy do odpowiednich danych i tyle
     
          suma_rozchodow << dane;
	         suma_przychodow << dane;
     cout << " stan konta : " << dane;
 
     plik.close();

}
