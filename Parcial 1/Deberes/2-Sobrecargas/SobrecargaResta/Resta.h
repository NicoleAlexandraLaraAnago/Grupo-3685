/*Universidad de las Fuerzas Armadas ESPE
Tpitulo: Sobrecargas de funciones 
Autor/es: Nicole Lara
Fecha de creación: 22/05/2021
Fecha de modificación:23/05/2021
Ingeniería de Software
Estructura de Datos*/

#include <iostream>

template <class Dato>

class Resta{
	Dato n1,n2,n3,n4;
	
public:
	Resta(Dato,Dato,Dato,Dato);
	
	void setDato1( Dato _n1);
	void setDato2( Dato _n2);
	void setDato3( Dato _n3);
	void setDato4( Dato _n4);


	Dato getN1();
	Dato getN2();
	Dato getN3();
	Dato getN4();
	Dato operator - (Dato _n1);
	/*Dato operator - (Dato _n3,Dato _n2,Dato _n1);
	Dato operator - (Dato _n1,Dato _n3,Dato _n2, Dato n4);*/

};

template <class Dato>
Resta<Dato>::Resta(Dato _n1,Dato _n2,Dato _n3,Dato _n4){
	n1 = _n1;
	n2 = _n2;
	n3 = _n3;
	n4 = _n4;
	
}
template <class Dato>
void Resta<Dato>::setDato1(Dato _n1){
	n1 = _n1;
}



template <class Dato>
void Resta<Dato>::setDato2(Dato _n2){
	n2 = _n2;

}

template <class Dato>
void Resta<Dato>::setDato4(Dato _n4){
	n4 = _n4;
}


template <class Dato>
Dato Resta<Dato>::getN1(){
	return n1;
}
template <class Dato>
Dato Resta<Dato>::getN2(){
	return n2;
}
template <class Dato>
Dato Resta<Dato>::getN3(){
	return n3;
}
template <class Dato>
Dato Resta<Dato>::getN4(){
	return n4;
}



template <class Dato>
Dato Resta<Dato>::operator -(Dato _n1){

	return this->getN1()- 10;
}

/*template <class Dato>
Dato Resta<Dato>::operator -(Dato _n3,Dato _n2, Dato _n1){
	return _n3-_n2-_n1;
}
template <class Dato>
Dato Resta<Dato>::operator -(Dato _n1,Dato _n3,Dato _n2, Dato _n4){
	return _n1-_n3_-n2-_n4;
}*/


