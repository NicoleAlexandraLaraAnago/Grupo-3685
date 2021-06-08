/*
UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE							   
Programa sobre el cubo magico 
Autor: Stalin Rivera											       
Fecha: 08/06/2021													   
Fecha de modificacion: 08/06/2021								   
*/
#include <iostream>
#include "Validacion.h"

using namespace std;

class Ingreso {

public:
	string leer(string,int);
};

string Ingreso::leer(string mensage,int tipo) {
	Validacion validacion;
	string entrada;
	cout << mensage << endl;
	cin >> entrada;
	while (validacion.validar(entrada, tipo)) {
		cout << "Valor no valido reingrese" << endl;
		cin >> entrada;
	}
	return entrada;

}
