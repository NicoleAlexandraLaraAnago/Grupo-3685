#include <iostream>
#include <math.h>
using namespace std;

/*Universidad de las Fuerzas Armadas ESPE
Tpitulo: Clases en C++
Autor/es:Cristian Maranje
Fecha de creacion: 27/05/2021
Fecha de modificacion:1/06/2021
Ingenieria de Software
Estructura de Datos*/


template <class T>
double Coseno (double angulo);

double factorial (double num);


double Coseno (double angulo){
	double coseno=0;
	for (int k=0; k < 30; k++){
		coseno = coseno + pow(-1,k)*pow(angulo,2*k)/factorial(2*k);
	}
	return coseno;
}

double factorial (double num){
	double f = 1;
	for(int i=1; i<= num ;i++){
		f=f*i;
	}
	return f;
}



