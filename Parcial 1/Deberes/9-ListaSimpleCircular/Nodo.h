/*Universidad de las Fuerzas Armadas ESPE
Título: Lista Simple Circular
#Grupo
Autor/es: Kevin Condor, Nicole Lara, Cristian Maranje, Stalin Rivera, Shirley Otuna
Fecha de creacíon: 16/06/2021
Fecha de modificación: 17/06/2021
Ingeniería en Software
Estructura de Datos*/

#include <iostream>

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
