#include "stdafx.h"
#include <iostream>
#include "conio.h"

using namespace std;

void main()
{
	int cantidad,opcion;
	float total;
	cout<<"===="<<endl;
	cout<<"1. Panchito"<<endl;
	cout<<"2. Empanada"<<endl;
	cout<<"3. Soda"<<endl;
	cout<<"0. Salir"<<endl;
	cout<<"Opcion: ";
	cin>>opcion;
	switch (opcion)
	{
	case 1: cout<<"ingrese cantidad: ";
		    cin>>cantidad;
			total=cantidad*5;
			break;
	case 2: cout<<"Ingrese cantidad: ";
		    cin>>cantidad;
			total=cantidad*4;
			break;
	case 3: cout<<"Ingrese cantidad: ";
		    cin>>cantidad;
			total=cantidad*3;
			break;
	case 0: cout<<"Salir ";
			break;
	
	default: cout<<"Error, no existe la opcion";
	}
	cout<<"El total es: ";
	cout<<total;
		getch();
}
