#include <iostream>
#include "ListaSimple.h"

/*
UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE							   
Titulo: Listas simples 
Autor: Cristian maranje											       
Fecha: 08/06/2021													   
Fecha de modificacion: 16/06/2021								   
*/

int main() {
    ListaSimple lst;
    lst.insertar(12);
    lst.insertar(2);
    lst.insertar(35);
    lst.insertar(4);
    lst.insertar(55);
    lst.insertar(6);
    lst.insertar(77);
    lst.insertarEn(1,99);

    lst.mostrar();
    return 0;
}
