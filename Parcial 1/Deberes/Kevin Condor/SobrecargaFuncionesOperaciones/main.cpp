/*Universidad de las Fuerzas Armadas ESPE
Tpitulo: Sobrecargas de funciones 
Autor/es: Kevin Condor
Fecha de creación: 23/05/2021
Fecha de modificación:27/05/2021
Ingeniería de Software
Estructura de Datos*/

#include <iostream>
#include "Multi.h"

using namespace std;


int main(){
	double i,j,k,l;
	Operaciones o1 (i), o2 (j), o3(k), o4(l);
	int opcion;
	for(;;){
		cout<<"Ingrese cuantos numeros desea ingresar para la multiplicacion: "<<endl;
		cout<<"Si desea salir precione 0"<<endl;
		cin>>opcion;
		system("cls");
		switch(opcion){
			case 0:
				cout<<"Hasta pronto!"<<endl;
				system("pause");
				exit(0);
				break;
			case 1:
				cout<<"Una multiplicacion no puede ser de un solo numero"<<endl<<"Ingrese nuevamente un numero"<<endl;
				system("pause");
				system("cls");
				break;
			case 2:
				cout<<"Ingrese el primer numero: "<<endl;
				cin>>i;
				o1.set(i);
				cout<<"Ingrese el segundo numero: "<<endl;
				cin>>j;
				o2.set(j);
				//cout<<"Los numeros multiplicados son: "<<o1.getN1()<<" y "<<o1.getN2()<<endl;
				cout<<"El resultado es: "<<o1*o2<<endl;
				system("pause");
				system("cls");
				break;
			case 3:
				cout<<"Ingrese el primer numero: "<<endl;
				cin>>i;
				o1.set(i);
				cout<<"Ingrese el segundo numero: "<<endl;
				cin>>j;
				o2.set(j);
				cout<<"Ingrese el tercer numero: "<<endl;
				cin>>k;
				o3.set(k);
				//cout<<"Los numeros multiplicados son: "<<o1.getN1()<<" y "<<o1.getN2()<<endl;
				cout<<"El resultado es: "<<(o1*o2)*o3<<endl;
				system("pause");
				system("cls");
				break;
			case 4:
				cout<<"Ingrese el primer numero: "<<endl;
				cin>>i;
				o1.set(i);
				cout<<"Ingrese el segundo numero: "<<endl;
				cin>>j;
				o2.set(j);
				cout<<"Ingrese el tercer numero: "<<endl;
				cin>>k;
				o3.set(k);
				cout<<"Ingrese el cuarto numero: "<<endl;
				cin>>l;
				o4.set(l);
				//cout<<"Los numeros multiplicados son: "<<o1.getN1()<<" y "<<o1.getN2()<<endl;
				cout<<"El resultado es: "<<((o1*o2)*(o3*o4))<<endl;
				system("pause");
				system("cls");
				break;
			default:
				cout<<"El valor ingresado debe ser entre 2 y 4"<<endl;
				system("pause");
				system("cls");
				break;
		}
	}
}


