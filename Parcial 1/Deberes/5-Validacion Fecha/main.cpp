/*Universidad de las Fuerzas Armadas ESPE
Título: Memoria Dinamica
#Grupo
Autor/es: Kevin Condor, Nicole Lara, Cristian Maranje, Stalin Rivera, Shirley otuna
Fecha de creacíon: 02/06/2021
Fecha de modificación: 03/06/2021
Ingeniería en Software
Estructura de Datos*/

#include <iostream>
#include "Operaciones.h"

using namespace std;

int main(int argc, char** argv) {
	Fecha fecha;
	Operaciones ope(fecha);
	bool aux;
	do{
		ope.ingresarFecha();
		aux = ope.comprobarFecha();
		if(aux == false){
			cout<<"Fecha incorrecta vuelva a ingresar"<<endl;
		}else{
			cout<<"Fecha correcta"<<endl;
		}

	}while(aux == false);
	ope.generaFecha(ope.limiteDePago());

	
	return 0;
}
