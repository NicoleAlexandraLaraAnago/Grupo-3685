/*Universidad de las Fuerzas Armadas ESPE
Titulo: Sobrecargas de funciones 
Autor/es: Shirley Otuna
Fecha de creación: 22/05/2021
Fecha de modificación:24/05/2021
Ingeniería de Software
Estructura de Datos*/

#include <iostream>
using namespace std;

int Calcular(int a, int b);
float Calcular(float, float);
double Calcular(double, double);

int Calcular(int a , int b){
	return a + b;
}

float Calcular(float a , float b){
	return a + b;
}

double Calcular(double a , double b){
	return a + b;
}
