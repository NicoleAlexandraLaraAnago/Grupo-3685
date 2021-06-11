#include <iostream>
#pragma once

class Nodo{
    private:
        static int valor;
        static Nodo *siguiente;
    public:
        Nodo(int val, Nodo *sig=NULL){
            this->valor = val;
            this->siguiente = sig;
        }
        static void setSiguiente(Nodo *sig){siguiente=sig;}
        static Nodo* getSiguiente(){return siguiente;}
        static int getValor(){return valor;}
    friend class Lista;
};

