#include "operations.h"
#include <iostream>
using namespace std;
operations::operations()
{
	suma_rozchodow = 0;
	suma_przychodow = 0;
}

double operations::get_sumar()
{
	return suma_rozchodow;
}
double operations::get_sumap()
{
	return suma_przychodow;
}
void dodaj(double suma, double wartosc)
{

}
//test github
void operations::rozchody()
{
	double temp = 0;
	cout << "DODAJ PRAD" << endl;
	cin >> temp;
	suma_rozchodow += temp;
	cout << "DODAJ CZYNSZ" << endl;
	cin >> temp;
	suma_rozchodow += temp;
	cout << "DODAJ UPC" << endl;
	cin >> temp;
	suma_rozchodow += temp;
	cout << "DODAC COS JESZCZE" << endl;
	string znak;
	cin >> znak;
	while(1)
	{
		
		try
		{
			if (znak != "tak" || znak != "TAK" || znak != "t" || znak != "T")
				throw Koniec();
			cout << "PROSZE PODAC KWOTE:" << endl;
			cin >> temp;
			suma_rozchodow += temp;			
			cout << "DODAC COS JESZCZE" << endl;
			cin >> znak;
		}
		catch ( Koniec )
		{
			break;
		}
	}
}
void operations::przychody()
{
	double temp;
	cout << "DODAJ ELA" << endl;
	cin >> temp;
	suma_przychodow += temp;
	cout << "DODAJ KRZYS" << endl;
	cin >> temp;
	suma_przychodow += temp;
}
double operations::sterowanie()
{
	cout << "Wprowadz rozchody:" << endl;
	rozchody();
	cout << "Wprowadz przychody:" << endl;
	przychody();

	cout << "SUMA PRZYCHOD�W : " << get_sumap() << endl;
	cout << "SUMA RACHUNK�W : "  << get_sumar() << endl;

	return suma_przychodow - suma_rozchodow;
}
