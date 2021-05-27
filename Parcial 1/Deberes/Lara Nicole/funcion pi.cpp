/*Universidad de las Fuerzas Armadas ESPE
Tpitulo: Sobrecargas de funciones 
Autor/es: Nicole Lara
Fecha de creación: 22/05/2021
Fecha de modificación:23/05/2021
Ingeniería de Software
Estructura de Datos*/

#include <iostream>
#include<stdlib.h>
#include<string>

using namespace std; 

class Operacion {
	private:
	double pi,x;

	public:
		operacion(double,double);//construtor de la clase
		void calcularpi(double epsilon);
		
		
};

double calcularpi(double epsilon){
	double pi =0;
	int i=0;
	int niter =100000;
	double numerador;
	double denominador;
	double termino; 
	double error=1.0;
	int signo(int i);
	while(error > epsilon && i<niter){
		numerador = signo (i)*4.0;
		denominador = (2*i)+1;
		termino = numerador / denominador;
		float error = abs(termino);
		pi = pi + termino;
		i++;
	}
	return pi;
}
int signo (int i){
	if(i%2)
	{
		return -1;
	}
	else{
		return 1;
	}
}
	int main(){
	double x;
	double pi;
	cout<<"Introduce el valor de la presicion: ";cin>>x;
	pi=calcularpi(x);
	cout<<"Ek vakir de pi es: "<<pi;	
		
		
	}
