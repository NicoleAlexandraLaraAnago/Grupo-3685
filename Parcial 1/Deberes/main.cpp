/*Universidad de las Fuerzas Armadas ESPE
Titulo: Sobrecargas de funciones 
Autor/es: Shirley Otuna
Fecha de creación: 22/05/2021
Fecha de modificación:24/05/2021
Ingeniería de Software
Estructura de Datos*/

#include <iostream>
#include "Suma.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num1,num2;
	float num3,num4;
	double num5,num6;
	cout<<"Ingrese primer numero entero : ";
	cin>>num1;
	cout<<"Ingrese segundo numero entero : ";
	cin>>num2;
	cout<<"Ingrese primer numero float : ";
	cin>>num3;
	cout<<"Ingrese segundo numero float : ";
	cin>>num4;
	cout<<"Ingrese primer numero double : ";
	cin>>num5;
	cout<<"Ingrese segundo numero double : ";
	cin>>num6;
	cout<<"suma de 2 enteros : "<<Calcular(num1,num2)<<endl;
	cout<<"suma de 2 float : "<<Calcular(num3,num4)<<endl;
	cout<<"suma de 2 double : "<<Calcular(num5,num6)<<endl;
	return 0;
}
