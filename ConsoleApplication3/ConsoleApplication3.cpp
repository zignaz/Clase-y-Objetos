
#include "stdafx.h"
#include "iostream"
#include "stdio.h"
#include "conio.h"


using namespace std;
using namespace System;

// ConsoleApplication3.cpp : main project file.

class A
{
	//Atributos.-
private:

	int x;
	int y;

	//////////////////////////////////////////////


	//Fuciones.-
public:

	//Constructor
	A();

	//Destructor
	~A();

	//////////////////////////////////////////////

	//Set (Asignar)

	void set_x(int x) ;
	void set_y(int y) ;

	
	//Get (Obtener)

	int get_x() ;
	int get_y() ;


	//Metodos de Acceso

	int Sumar();
	int Restar();
	int Multiplicar();
	double Dividir();


};

A::A()
{
	x = 4;
	y = 5;
}

A::~A()
{

}

void A::set_x(int valor)
{
	this->x = valor;
}

void A::set_y(int valor)
{
	this->y = valor;
}

int A::Sumar()
{
	
	int suma;
	suma = x + y;
	return suma;

}

int A::Restar()
{
	int resta;
	resta = x + y;
	return resta;
}

int A::Multiplicar()
{
	int multiplica;
	multiplica = x*y;
	return multiplica;
}

double A::Dividir()
{
	double divide;
	divide = double(x) / double(y);
	return divide;
}

int A::get_x()
{
	return x;
}

int A::get_y()
{
	return y;
}





int main()
{
	A *objA;  //define variable de tipo A

	//  instanciar objeto

	objA = new A();

	cout<< "\nAtributo X : " << objA->get_x();

	// ejemplo  objA->set_x(666);

	cout << "\nAtributo y : " << objA->get_y();

	cout << "\nAtributo X : " << objA->Sumar();
	cout << "\nAtributo X : " << objA->Restar();
	cout << "\nAtributo X : " << objA->Multiplicar();
	cout << "\nAtributo X : " << objA->Dividir();

	cout << "\nCambiar los valor :";
	cout << "\nCambiar el valor de x : ";
	int VarX;
	cin >> VarX;
	cout << "\nAtributo x : "; objA->set_x(VarX);



	_getch();
	return 0;
}
