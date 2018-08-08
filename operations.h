#ifndef OPERTATIONS_H
#define OPERTATIONS_H
class operations
{
public:
    class Koniec {};
	operations();
	double get_sumap();
	double get_sumar();
	double sterowanie();
private:
	void przychody();
	void rozchody();
	double suma_rozchodow;
	double suma_przychodow;
};
#endif
