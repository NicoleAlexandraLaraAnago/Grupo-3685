/*Universidad de las Fuerzas Armadas ESPE
Tpitulo: Clases en C++
Autor/es: Shirley Otuna
Fecha de creacion: 26/05/2021
Fecha de modificacion: 27/05/2021
Ingenieria de Software
Estructura de Datos*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

using namespace std;

double factorial(int n);

double taylor(int n, int x){
	double t, s = 0;
	for(int i = 0; i < n; i++){
		t = pow(x, i)/ factorial(i);
		s += t;
	}
	return s;
}

double factorial(int n){
	double fac = 1;
	for(int i = 2; i <= n; i++){
		fac *= i;
	}
	return fac;
}
