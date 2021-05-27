/*Universidad de las Fuerzas Armadas ESPE
Tpitulo: Sobrecargas de funciones 
Autor/es: Kevin Condor
Fecha de creación: 23/05/2021
Fecha de modificación:27/05/2021
Ingeniería de Software
Estructura de Datos*/

#include<iostream>

using namespace std;

class Operaciones{
	double n1;
public:
	Operaciones(double);
	Operaciones();
	double get();
	void set(double);
	
};

Operaciones::Operaciones(double _n1){
	n1=_n1;
}

Operaciones::Operaciones(){
}

double Operaciones::get(){
	return n1;
}

void Operaciones::set(double _n1){
	n1=_n1;
}

double operator * (Operaciones _n1,Operaciones _n2){
	return (_n1.get()*_n2.get());
}
