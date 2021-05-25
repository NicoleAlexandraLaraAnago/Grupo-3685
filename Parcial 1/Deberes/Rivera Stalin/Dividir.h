/*Universidad de las Fuerzas Armadas "ESPE"
Titulo: Sobrecarga de Funciones
Autor/es: Stalin Rivera 
Fecha de Creación: 23/05/2021
Fecha de Modificación: 24/05/2021
Inginiería de Software
Estructura de Datos*/

#include <iostream>

using namespace std;

class division{
	public:
		double Calcular(double num1,double num2);
		
	private:
		double calcular; 
		
};
float Calcular(double num1,double num2);

float Calcular(double num1,double num2){
	return num1/num2;
}


