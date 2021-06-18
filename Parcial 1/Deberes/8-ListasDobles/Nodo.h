#ifndef NODO_H
#define NODO_H

/*
UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE							   
Titulo: Lista
Autor: Stalin Rivera											       
Fecha: 08/06/2021													   
Fecha de modificacion: 10/06/2021								   
*/
#include <cstring>

using namespace std;

class Nodo{
	private:
		int dato;
		Nodo *anterior;
		Nodo *siguiente;	
	public:
		Nodo(void);
		Nodo(int,Nodo*,Nodo*);
		void setDato(int);
		int getDato(void);
		Nodo getSiguiente(void);
		void setSiguiente(Nodo*);
		Nodo getAnterior(void);
		void setAnterior(Nodo*);
		friend class Lista;

};

#endif
