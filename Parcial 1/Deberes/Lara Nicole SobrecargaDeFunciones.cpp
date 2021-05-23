/*Universidad de las Fuerzas Armadas ESPE
Tpitulo: Sobrecargas de funciones 
Autor/es: Nicole Lara
Fecha de creación: 22/05/2021
Fecha de modificación:23/05/2021
Ingeniería de Software
Estructura de Datos*/

#include <iostream>
using namespace std;

//Aquí declaras los proptotipos de las funciones
int Calcular(int a, int b);
float Calcular(float, float);
float Calcular(int, float);
float Calcular(float, int);

int Calcular(int a, int b)
{
return a - b;
}
float Calcular(float a, float b)
{
return a - b;
}
float Calcular(int a, float b)
{
return a - b;
}
float Calcular(float a, int b)
{
return a - b;
}

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
