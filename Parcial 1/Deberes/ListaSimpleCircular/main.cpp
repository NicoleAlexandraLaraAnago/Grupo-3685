#include <iostream>
#include "ListaSimple.h"

/*
UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE							   
Titulo: Listas simples 
Autor: Cristian Maranje											       
Fecha: 08/06/2021													   
Fecha de modificacion: 16/06/2021								   
*/

//imprimir en forma recursiva

int main()
{
    int num;
    ListaSimple lst;
    std::cout<<"Ingrese el numero que desea insertar: "; std::cin>>num;
    lst.insertar(num);
    lst.insertar(12);
    lst.insertar(2);
    lst.insertar(35);
    lst.insertar(4);
    lst.insertar(55);
    lst.insertar(6);
    lst.insertar(77);
    lst.insertar(8);
    lst.insertarEn(1, 99);
    lst.eliminar(5);

    lst.mostrar();
    return 0;
}
