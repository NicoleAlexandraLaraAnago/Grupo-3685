#include <iostream>
#include "Funcion Coseno.h"

using namespace std;

/*Universidad de las Fuerzas Armadas ESPE
Tpitulo: Clases en C++
Autor/es:Cristian Maranje
Fecha de creacion: 27/05/2021
Fecha de modificacion:
Ingenieria de Software
Estructura de Datos*/




int main() {
	float angulo=0;
	int terninos;
	cout<<"-----------Calculo de coseno con la aproximacion de Taylor-------------"<<endl;
	cout<<"Ingrese el angulo para calcular el coseno: "; cin>>angulo;
	cout<<"Ingrese el numero de terminos: "; cin>>terninos;
	
	cout<<"El cos("<<angulo<<") es: "<<Coseno(angulo,terninos)<<endl;
	return 0;
}
