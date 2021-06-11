#include <iostream>
#include "Nodo.h"
#pragma once


class Lista{
    private:
        static Nodo *primero;
        static Nodo *actual;

    public:
        Lista(){
            this->primero = NULL;
            this->actual = NULL;
        }
        void insertar(int val);
        void eliminar();
        void mostrar();
        static Nodo* getPrimero(){return primero;}
        static void setPrimero(Nodo *pri){primero=pri;}
        static Nodo* getActual(){return actual;}
        static void setActual(Nodo *act){actual=act;}
};

bool listaVacia(){
    return (Lista::getPrimero()==NULL);
}

void insertar(int val){
    Nodo *nuevo=new Nodo(val);
    if(listaVacia()){
        Lista::setPrimero(nuevo);
    }else{
        Nodo::setSiguiente(nuevo);
    }
    Lista::setActual(nuevo);
}

void mostrar(){
    Nodo *tmp=Lista::getPrimero();
    while(tmp){
        std::cout<<tmp->getValor<<"-->";
        tmp=tmp->getSiguiente();
    }
    std::cout<<"NULL\n";
}




