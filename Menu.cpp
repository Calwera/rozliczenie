#include "Menu.h"
#include "operations.h"
#include <iostream>
using namespace std;

void Menu::menu()
{
	while (1)
	{
		cout << "_______________________________________________"  << endl;
		cout << endl;
		cout << "|WITAJ! W ROZLICZENIU MIESIECZNYM !!!!!!!!!!!!!|" << endl;
		cout << "|WYBIERZ ODPOWIEDNIA OPCJE Z MENU:             |" << endl;
		cout << "________________________________________________" << endl;
		cout << "1. ROZLICZ RACHUNKI" << endl;
		cout << "2. ZAPISZ DANE DO PLIKU " << endl;
		cout << "3. OPUSC PROGRAM " << endl;
		cout << "4. WCZYTAJ DANE Z PLIKU " << endl;
	
		int wybor;
		operations oper1;
		cin >> wybor;

		switch (wybor)
		{
			case 1:
				{
				cout << "SUMA WYNOSI : " << oper1.sterowanie()<< endl;
				cout << "WYKONANO" << endl;
				break;
				}
			case 2:
				{
				zapisywanie zaps1;
				zaps1.zapisz();
				cout << "DANE ZAPISANO !!!!: << endl;
				break;
				}
			case 3:
				exit(1);
			case 4:
				{
				zapisywanie wczy1;
				wczy1.odczytaj();
				break;
				}
							
			default:
				cout << "NIE MA TAKIEJ OPCJI" << endl;
				break;
		}
	}
}

