/*
UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE							   
Titulo: Lista
Autor: Stalin Rivera											       
Fecha: 08/06/2021													   
Fecha de modificacion: 10/06/2021								   
*/
#include <iostream>
#include <cstring>
#include "Nodo.h"

using namespace std;


void Nodo::setDato(int newDato){
	dato = newDato;
}

int Nodo::getDato(void){
	return dato;
}

Nodo Nodo::getAnterior(void){
   return *anterior;
}

void Nodo::setAnterior(Nodo *newAnterior){
   anterior = newAnterior;
}

Nodo Nodo::getSiguiente(void){
   return *siguiente;
}

void Nodo::setSiguiente(Nodo *newSiguiente){
   siguiente = newSiguiente;
}

Nodo::Nodo(){
	dato=0;
    siguiente=NULL;
    anterior=NULL;
}

Nodo::Nodo(int newDato,Nodo *newSiguiente,Nodo *newAnterior){
    dato=newDato;
    siguiente=newSiguiente;
    anterior=newAnterior;
}
