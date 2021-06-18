/*Universidad de las Fuerzas Armadas ESPE
Titulo: Sobrecargas de funciones 
Autor/es: Kevin Condor
Fecha de creación: 27/05/2021
Fecha de modificación:27/05/2021
Ingeniería de Software
Estructura de Datos*/

#include<iostream>

using namespace std;

using namespace std;
double seno(double x);
double fact(double a);
double elev(double x, double e);

double fact(double a){
	int N = 1;
	for(int i = 1; i<=a; i++){
		N = N*i;
	}
	return N;
}

double elev(double x, double e){
	double resp = 1;
	for(int i=0; i<e; i++){
		resp = resp * x;
	}
	return resp;
}

double Seno(double valor, int n){
	int i;
	double seno, dividendo, signo, divisor;
	seno=0; dividendo=0; signo = 0; divisor = 0;
	for (i=0; i<n; i++){
		dividendo = elev(valor, 2*i+1);
		signo = elev(-1,i);
		divisor = fact(2*i+1);
		seno = seno+((dividendo/divisor)*signo);
	}
	return seno;
}

