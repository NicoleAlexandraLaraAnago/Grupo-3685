/*
UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE							   
Titulo: Lista
Autor: Stalin Rivera											       
Fecha: 08/06/2021													   
Fecha de modificacion: 10/06/2021								   
*/
#include <iostream>
#include "lista.h"

int main(int argc, char** argv) {
	Lista lst;
	lst.insertar(12);
	lst.insertar(2);
	lst.insertar(35);
	lst.insertar(4);
	lst.insertar(55);
	lst.insertar(6);
	lst.insertar(77);
	lst.mostrar();
	return 0;
}
