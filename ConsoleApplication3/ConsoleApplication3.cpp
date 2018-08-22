
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

	//Metodos de Acceso
	
	//Set (Asignar)

	void set_x(int x) ;
	void set_y(int y) ;

	//Get (Obtener)

	int get_x() ;
	int get_y() ;


};

A::A()
{
	x = 0;
	y = 0;
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

	objA->set_x(666);

	cout << "\nAtributo X : " << objA->get_x();


    



	_getch();
	return 0;
}
