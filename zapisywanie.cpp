#include "zapisywanie.h"
#include <fstream>
#include <iostream>
using namespace std;




fstream plik;
plik.open( "rozliczenie.txt", ios::in | ios::out );
if( plik.good() == true )
{
    cout << "Uzyskano dostep do pliku!" << endl;
    
} else cout << "Dostep do pliku zostal zabroniony!" << endl;


plik.close();
