#include <iostream>

/*
UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE							   
Titulo: Listas simples 
Autor: Cristian maranje											       
Fecha: 08/06/2021													   
Fecha de modificacion: 16/06/2021								   
*/

class Nodo
{
private:
    int valor;
    Nodo *siguiente;

public:
    Nodo(int val, Nodo *sig)
    {
        this->valor = val;
        this->siguiente = sig;
    }
    
    void setSiguiente(Nodo *sig) { siguiente = sig; }
    Nodo *getSiguiente() { return siguiente; }
    int getValor() { return valor; }
    friend class Lista;
};
