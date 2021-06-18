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

void ListaSimple::insertar(int val)
{
    Nodo *nuevo = new Nodo(val , primero);
    if (ListaSimple::listaVacia())
    {
        primero = nuevo;
    }
    else
    {
        actual->setSiguiente(nuevo);
    }
    actual = nuevo;
    dimLista++;
}

void ListaSimple::mostrar()
{
    Nodo *tmp = primero;
    int indice = 0;
    mostrarRecursivo(tmp,indice);

}

void ListaSimple::mostrarRecursivo(Nodo *valor,int indice){
    std::cout << "Indice: " << indice++ << " Valor: " << valor->getValor() << std::endl;
    if(indice< dimLista)
        mostrarRecursivo(valor->getSiguiente(),indice++);
}

void ListaSimple::eliminar(int indice)
{
    Nodo *actual = obtenerNodo(indice - 1);
    Nodo *tmp = obtenerNodo(indice + 1);
    actual->setSiguiente(tmp);
    dimLista--;
}

Nodo *ListaSimple::obtenerNodo(int indice)
{
    int cont = 0;
    Nodo *tmp = primero;
    while (tmp->getSiguiente() != nullptr)
    {
        if (cont == indice)
        {
            break;
        }
        cont++;
        tmp = tmp->getSiguiente();
    }
    return tmp;
}

void ListaSimple::insertarEn(int indice, int val)
{
    Nodo *nuevo = new Nodo(val, primero);
    Nodo *actual = obtenerNodo(indice - 1);
    Nodo *tmp = actual->getSiguiente();
    actual->setSiguiente(nuevo);
    actual = actual->getSiguiente();
    actual->setSiguiente(tmp);
    dimLista++;
}
