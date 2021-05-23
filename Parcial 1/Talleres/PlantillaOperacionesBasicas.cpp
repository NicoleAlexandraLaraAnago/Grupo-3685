/*Universidad de las Fuerzas Armadas ESPE
Título: Plantillas
#Grupo
Autor/es: Kevin Condor, Nicole Lara, Cristian Maranje, Stalin Rivera, Shirley otuna
Fecha de creacíon: 19/05/2021
Fecha de modificación: 19/05/2021
Ingeniería en Software
Estructura de Datos*/

#include<iostream>

using namespace std;

//Suma
template <class TipoDato>
class Suma{
	TipoDato n1,n2;
public:
	Suma(TipoDato _n1, TipoDato _n2){
		n1 = _n1;
		n2 = _n2;
	};
	TipoDato Sumar();
};

template <class TipoDato>
TipoDato Suma<TipoDato>::Sumar(){
	return n1+n2;
}
//Resta
template <class TipoDato>
class Resta{
	TipoDato n3,n4;
public:
	Resta(TipoDato _n3, TipoDato _n4){
		n3 = _n3;
		n4 = _n4;
	};
	TipoDato Restar();
};

template <class TipoDato>
TipoDato Resta<TipoDato>::Restar(){
	return n3-n4;
}
//Multiplicación
template <class TipoDato>
class Multiplicacion{
	TipoDato n5,n6;
public:
	Multiplicacion(TipoDato _n5, TipoDato _n6){
		n5 = _n5;
		n6 = _n6;
	};
	TipoDato Multiplicar();
};

template <class TipoDato>
TipoDato Multiplicacion<TipoDato>::Multiplicar(){
	return n5*n6;
}
//Division
template <class TipoDato>
class Division{
	TipoDato n7,n8;
public:
	Division(TipoDato _n7, TipoDato _n8){
		n7 = _n7;
		n8 = _n8;
	};
	TipoDato Dividir();
};

template <class TipoDato>
TipoDato Division<TipoDato>::Dividir(){
	return n7/n8;
}


main(){
	Resta<int> dosnum(20,15);
	cout<<"El resultado es: "<<dosnum.Restar()<<endl;
	
	Suma<int> sumados(10,20);
	cout<<"El resultado es: "<<sumados.Sumar()<<endl;
	
	Multiplicacion<int> multi(5,8);
	cout<<"El resultado es: "<<multi.Multiplicar()<<endl;
	
	Division<float> divi(15,2);
	cout<<"El resultado es: "<<divi.Dividir()<<endl;
}
