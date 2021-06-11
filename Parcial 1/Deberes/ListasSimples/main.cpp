#include <iostream>
#include "Lista.h"

/*
UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE							   
Titulo: Lista
Autor: Cristian maranje											       
Fecha: 08/06/2021													   
Fecha de modificacion: 10/06/2021								   
*/

int main(){
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
