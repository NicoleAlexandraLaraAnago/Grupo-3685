/*Universidad de las Fuerzas Armadas "ESPE"
Titulo: Sobrecarga de Funciones
Autor/es: Stalin Rivera
Fecha de Creación: 26/05/2021
Fecha de Modificación: 26/05/2021
Inginiería de Software
Estructura de Datos*/

#include <iostream>
#include "Dividir.h"
using namespace std;

int main(int arg, char** argv){

	double _num1;
	double _num2;
	cout<<"Ingrese el primer numero: ";
	cin>>_num1;
	cout<<"Ingrese el segundo numero: ";
	cin>>_num2;
	cout<<"El resultado de la division es: "<<Calcular(_num1,_num2)<<endl;
	system("PAUSE()");
	return 0;
}
