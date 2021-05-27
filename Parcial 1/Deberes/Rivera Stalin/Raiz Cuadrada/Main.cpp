/*Universidad de las Fuerzas Armadas "ESPE"
Titulo: Sobrecarga de Funciones
Autor/es: Stalin Rivera
Fecha de Creación: 26/05/2021
Fecha de Modificación: 26/05/2021
Inginiería de Software
Estructura de Datos*/
#include "Raiz.h"
#include<iostream>
using namespace std;


int main(){
	Calculo serie;
	int numero;
	double resultado;

	cout << "CALCULO DE RAICES CUADRADAS\n" << endl;
	cout << "Ingrese un numero para calcular su raiz: ";
	cin >> numero;

	if(numero <= 0){
		cout << "\nNumero incorrecto!" << endl;
	}
	else{
		resultado = serie.calcularRaizCuadrada(numero);

		cout << "\nLa raiz cuadrada de " << numero << " es: " << resultado << endl;
	}

	return 0;
}
