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

Resta<float> r1(num1,num2,num3,num4);
Resta<float> r2(0,0,0,0);
float x= r1-r2;
cout<<"resultado"<<x<<endl;


//r1.setDato1(num1);
//cout<<"resta de "<<r1.getN1<<" y "<<r1.getN2<<" : "<<r1.operator -(num1-num2);

//r2.setDato(num3,num4);
//cout<<"resta de "<<r2.getN3<<" - "<<r2.getN2<<"-"<<r2.getN1" : "<<r2.operator -(num3-num2-num1);

/*cout<<"resta de "<<num3<<" y "<<num4<<" : "<<Restar(num3,num4)<<endl;
cout<<"resta de "<<num1<<" y "<<num3<<" : "<<Restar(num1,num3)<<endl;
cout<<"resta de "<<num3<<" y "<<num1<<" : "<<Restar(num3,num1)<<endl;
return 0;*/
}
