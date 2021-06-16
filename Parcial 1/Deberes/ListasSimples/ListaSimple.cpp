#include <iostream>
#include "ListaSimple.h"

/*
UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE							   
Titulo: Listas simples 
Autor: Cristian maranje											       
Fecha: 08/06/2021													   
Fecha de modificacion: 16/06/2021								   
*/

void ListaSimple::insertar(int val){
    Nodo *nuevo=new Nodo(val);
    if(ListaSimple::listaVacia()){
        primero = nuevo;
    }else{
        actual->setSiguiente(nuevo);
    }
    actual = nuevo;
    dimLista++;
}

void ListaSimple::mostrar(){
    Nodo *tmp=primero;
    int indice = 0;
    while(tmp){
        std::cout<<"Indice: "<<indice++<<" Valor: "<<tmp->getValor()<<std::endl;
        tmp=tmp->getSiguiente();
    }
    std::cout<<"NULL\n";
}

void ListaSimple::eliminar(int indice){
    Nodo *actual = obtenerNodo(indice-1);
    Nodo *tmp = obtenerNodo(indice +1);
    actual->setSiguiente(tmp);
}

Nodo *ListaSimple::obtenerNodo(int indice){
    int cont = 0;
    Nodo *tmp =primero;
    while(tmp->getSiguiente()!=nullptr){
        if(cont==indice){
            break;
        }
        cont++;
        tmp=tmp->getSiguiente();
    }
    return tmp;
}

void ListaSimple::insertarEn(int indice,int val){
    Nodo *nuevo=new Nodo(val);
    Nodo *actual = obtenerNodo(indice-1);
    Nodo *tmp = actual->getSiguiente();
    actual->setSiguiente(nuevo);
    actual=actual->getSiguiente();
    actual->setSiguiente(tmp);
    dimLista++;
}
