#include <iostream>
#include "Funcion Coseno.h"
#define PI 3.14159265

using namespace std;

/*Universidad de las Fuerzas Armadas ESPE
Tpitulo: Clases en C++
Autor/es:Cristian Maranje
Fecha de creacion: 27/05/2021
Fecha de modificacion:1/06/2021
Ingenieria de Software
Estructura de Datos*/




int main() {
	double angulo=0,anguloRadianes=0;
	int terninos;
	cout<<"-----------Calculo de coseno con la aproximacion de Taylor-------------"<<endl;
	cout<<"Ingrese el angulo para calcular el coseno: "; cin>>angulo;
	
	anguloRadianes = angulo*PI/180;
	
	cout<<"El cos("<<angulo<<") es: "<<Coseno(anguloRadianes)<<endl;
	return 0;
}
