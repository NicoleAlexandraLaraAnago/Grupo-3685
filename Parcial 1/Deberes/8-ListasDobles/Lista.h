/*
UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE							   
Titulo: Lista
Autor: Stalin Rivera											       
Fecha: 08/06/2021													   
Fecha de modificacion: 10/06/2021								   
*/
#ifndef LISTA_H
#define LISTA_H

#include "Nodo.h"

class Lista{
	private:
		Nodo *cabeza;
		Nodo *cola;
	public:
		Lista();
		bool vacio(void);
		void imprimir();
		int tamano();
		void eliminar();
		void insertarInicio(int);
		void insertarFinal(int);
		void insertarEntre(int,int);
};

#endif
