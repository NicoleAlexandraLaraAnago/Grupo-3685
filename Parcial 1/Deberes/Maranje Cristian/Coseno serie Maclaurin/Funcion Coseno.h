#include <iostream>
#include <math.h>
using namespace std;

/*Universidad de las Fuerzas Armadas ESPE
Tpitulo: Clases en C++
Autor/es:Cristian Maranje
Fecha de creacion: 27/05/2021
Fecha de modificacion:
Ingenieria de Software
Estructura de Datos*/


template <class T>
float Coseno (float angulo);

int factorial (int num);


float Coseno (float angulo,int terninos){
	double coseno=0;
	for (int k=0; k < terninos; k++){
		coseno = coseno + pow(-1,k)*pow(angulo,2*k)/factorial(2*k);
	}
	return coseno;
}

int factorial (int num){
	int f = 1;
	for(int i=1; i<= num ;i++){
		f=f*i;
	}
	return f;
}



