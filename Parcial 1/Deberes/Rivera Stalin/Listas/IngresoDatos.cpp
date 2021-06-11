/*
UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE							   
Titulo: Lista
Autor: Stalin Rivera											       
Fecha: 08/06/2021													   
Fecha de modificacion: 10/06/2021								   
*/
#include <cstring>
#include <iostream>
#include "IngresoDatos.h"

using namespace std;

template <class T>
T IngresoDatos<T>::ingreso(T mensaje){
	T dato;
	cout<<mensaje;
	cin>>dato;
	return dato;
}
