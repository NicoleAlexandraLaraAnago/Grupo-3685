/*Universidad de las Fuerzas Armadas ESPE
Titulo: Sobrecargas de funciones 
Autor/es: Kevin Condor
Fecha de creaci�n: 27/05/2021
Fecha de modificaci�n:27/05/2021
Ingenier�a de Software
Estructura de Datos*/

#include <iostream>
#include "Sen.h"

using namespace std;

int main(){
	double valor, resultado;
	int n;
	cout<<"Calculadora de la funcion Seno"<<endl;
	cout<<"Ingrese su valor a calcular (en radianes): ";	cin>>valor;
	cout<<"Ingrese el numero de repeticiones: ";	cin>>n;
	system("cls");
	resultado = Seno(valor,n);
	cout<<"El seno de "<<valor<<" es: "<<resultado<<endl;
}
