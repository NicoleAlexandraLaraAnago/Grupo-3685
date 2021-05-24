#include <iostream>
#include <string>

/*Universidad de las Fuerzas Armadas ESPE
Tpitulo: Clases en C++
Autor/es:Cristian Maranje
Fecha de creacion: 24/05/2021
Fecha de modificacion:
Ingenieria de Software
Estructura de Datos*/

using namespace std;

template<class T>
void mayor_menor (T num1, T num2);
template<class T2>
void imprimir (T2 mayor, T2 menor);
template<class T3>
void imprimir_iguales(T3 num1, T3 num2);


template<class T>
void mayor_menor (T num1, T num2){
	if(num1 > num2){
		imprimir(num1,num2);
	}
	else if(num1<num2){
		imprimir(num2,num1);
	}
	else{
		imprimir_iguales(num1,num2);
	}
}

template<class T2>
void imprimir (T2 mayor, T2 menor){
	cout<<mayor<<" es mayor que "<<menor<<endl;
}

template<class T3>
void imprimir_iguales(T3 num1, T3 num2){
	cout<<num1<<" es ifual a "<<num2<<endl;
}
