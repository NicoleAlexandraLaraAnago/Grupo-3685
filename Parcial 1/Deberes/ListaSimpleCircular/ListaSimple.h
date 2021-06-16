#include <iostream>
#include "Nodo.h"

/*
UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE							   
Titulo: Listas simples 
Autor: Cristian maranje											       
Fecha: 08/06/2021													   
Fecha de modificacion: 16/06/2021								   
*/

//Posibles operaciones: insertar(inserta al ultimo), insertar en una posicion, eliminar (indice del item), mostrar.

class ListaSimple
{
private:
    Nodo *primero;
    Nodo *actual;
    int dimLista = 0;
    Nodo *obtenerNodo(int indice);

public:
    ListaSimple()
    {
        this->primero = NULL;
        this->actual = NULL;
    }
    bool listaVacia() { return (primero == NULL); };
    void insertar(int val);
    void insertarEn(int indice, int val);
    void eliminar(int indice);
    void mostrar();
    void mostrarRecursivo(Nodo *valor,int indice);
    Nodo *getPrimero() { return primero; }
    void setPrimero(Nodo *pri) { primero = pri; }
    Nodo *getActual() { return actual; }
    void setActual(Nodo *act) { actual = act; }
    int getDimLista() {return dimLista;}
    void setDimLista(int dim) {dimLista=dim;}
};