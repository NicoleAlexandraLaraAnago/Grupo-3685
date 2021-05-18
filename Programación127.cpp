/*Universidad de las Fuerzas Armadas ESPE
Tpitulo: Clases en C++
Autor/es: Nicole Lara
Fecha de creaci�n: 17/05/2021
Fecha de modificaci�n:
Ingenier�a de Software
Estructura de Datos*/
#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std; 

class Persona {
	private:
	int edad;
	string nombre;
	public:
		Persona(int,string);//construtor de la clase
		void leer();
		void correr();
};
//Constructor: Nos sirve para inicializar los atributos
Persona::Persona(int _edad, string _nombre){
	edad = _edad;
	nombre = _nombre;
}
void Persona::leer(){
	cout<<"Soy"<<nombre<<"y estoy leyendo un libro"<<endl;
}
void Persona::correr(){
	cout<<"soy"<<nombre<<" y estoy coorriendo 10k y tengo "<<edad<<"a�os"<<endl;
}

int main(){
	Persona p1= Persona(20," Nicole ");
	Persona p2(19 ," Mar�a ");
	Persona p3(21 ," Juan ");
	p1.leer();
	p2.correr();
	p3.leer();
	p3.correr();
	system("pause");
	return 0;
}
