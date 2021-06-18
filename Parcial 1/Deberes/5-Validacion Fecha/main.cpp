/*Universidad de las Fuerzas Armadas ESPE
T�tulo: Memoria Dinamica
#Grupo
Autor/es: Kevin Condor, Nicole Lara, Cristian Maranje, Stalin Rivera, Shirley otuna
Fecha de creac�on: 02/06/2021
Fecha de modificaci�n: 03/06/2021
Ingenier�a en Software
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
