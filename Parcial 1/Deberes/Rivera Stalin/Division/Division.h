/*Universidad de las Fuerzas Armadas "ESPE"
Titulo: Sobrecarga de Funciones
Autor/es: Stalin Rivera
Fecha de Creación: 26/05/2021
Fecha de Modificación: 26/05/2021
Inginiería de Software
Estructura de Datos*/
#include <iostream>

using namespace std;

class Calculo{
	private:
		int cociente, dividendo, divisor, resto;
	public:
		//Getters
		int getCociente(){
		 return cociente; }
		int getDividendo(){
		 return dividendo; }
		int getDivisor(){
		 return divisor; }
		double getResto(){
		 return resto; }
		
		//Setters
		int setCociente(){
		 return cociente; }
		int setDividendo(){
		 return dividendo; }
		int setDivisor(){
		 return divisor; }
		double setResto(){
		 return resto; }
		
		//Funciones
		void calcularCifras(int ingreso);
};


