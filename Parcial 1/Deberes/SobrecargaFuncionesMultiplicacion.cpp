/*Universidad de las Fuerzas Armadas ESPE
Tpitulo: Sobrecargas de funciones 
Autor/es: Kevin Condor
Fecha de creación: 23/05/2021
Fecha de modificación:24/05/2021
Ingeniería de Software
Estructura de Datos*/

#include <iostream>
#include "Multiplicar.h"

using namespace std;

int main() {
	double num1,num2,num3,num4,num5;
	int n1,n2,n3,n4,n5;
	cout<<"Ingrese primer numero: ";
	cin>>num1;
	cout<<"Ingrese segundo numero: ";
	cin>>n1;
	cout<<"Ingrese tercero numero: ";
	cin>>num2;
	cout<<"Ingrese cuarto numero: ";
	cin>>n2;
	cout<<"Ingrese quinto numero: ";
	cin>>num3;
	cout<<"El resultado es: "<<Calcular(num1,n1,num2,n2,num3);
	return 0;
}
