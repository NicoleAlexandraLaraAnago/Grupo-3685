/*
UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE							   
Titulo: Lista
Autor: Stalin Rivera											       
Fecha: 08/06/2021													   
Fecha de modificacion: 10/06/2021								   
*/
#ifndef LISTA_H
#define LISTA_H

#include "Nodo.h"

class Lista{
	private:
		Nodo *cabeza;
		Nodo *cola;
	public:
		Lista();
		bool vacio(void);
		void imprimir();
		int tamano();
		void insertarInicio(int);
		void insertarFinal(int);
		void insertarEntre(int,int);
};

#endif
/*
#include "Nodo.h"
using namespace std;
class Lista{
	private:
		Nodo *primero;
		Nodo *actual;
	bool listaVacia(){
		return (this->primero==NULL);
	}
	public:
		Lista(){
			this->primero=NULL;
			this->actual=NULL;
		}
		void insertar(int val){
			Nodo *nuevo=new Nodo(val);
			if (listaVacia()){
				this->primero=nuevo;
			}
			else{
				this->actual->siguiente=nuevo;
			}
			this->actual=nuevo;
		}
		void mostrar(){
			Nodo *tmp=this->primero;
			while(tmp){
				cout<<tmp->valor<< "-->";
				tmp=tmp->siguiente;
			}
			cout<<"NULL\n";
		}
};
*/
