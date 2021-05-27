/*Universidad de las Fuerzas Armadas ESPE
Tpitulo: Sobrecargas de funciones 
Autor/es: Nicole Lara
Fecha de creación: 22/05/2021
Fecha de modificación:23/05/2021
Ingeniería de Software
Estructura de Datos*/

#include <iostream>
#include "Resta.h"
using namespace std;

int main(int argc, char** argv) {
int num1,num2;
float num3,num4;
cout<<"Ingrese primer numero entero : ";
cin>>num1;
cout<<"Ingrese segundo numero entero : ";
cin>>num2;
cout<<"Ingrese primer numero float : ";
cin>>num3;
cout<<"Ingrese segundo numero float : ";
cin>>num4;
cout<<"resta de 2 enteros : "<<Calcular(num1,num2)<<endl;
cout<<"resta de 2 float : "<<Calcular(num3,num4)<<endl;
cout<<"resta de 1 entero y 1 float: "<<Calcular(num1,num3)<<endl;
cout<<"resta de 1 float y 1 entero : "<<Calcular(num3,num1)<<endl;
return 0;
}
