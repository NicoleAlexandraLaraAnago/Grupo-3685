/*Universidad de las Fuerzas Armadas ESPE
Título: Lista Simple Circular
#Grupo
Autor/es: Kevin Condor, Nicole Lara, Cristian Maranje, Stalin Rivera, Shirley Otuna
Fecha de creacíon: 16/06/2021
Fecha de modificación: 17/06/2021
Ingeniería en Software
Estructura de Datos*/

#include <iostream>
#include "ListaSimple.h"

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
