/*Universidad de las Fuerzas Armadas "ESPE"
Titulo: Sobrecarga de Funciones
Autor/es: Stalin Rivera 
Fecha de Creaci�n: 23/05/2021
Fecha de Modificaci�n: 24/05/2021
Inginier�a de Software
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


