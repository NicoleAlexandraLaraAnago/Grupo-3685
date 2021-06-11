#include<iostream>
#include"Lista.h"
class Lista{

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
		void elminarNodo(Nodo *&Lista, int n){
			if(lista != NULL){
				Nodo *borrar;
				Nodo *anterior = NULL;
			}
			while((borrar !=NULL)&&(borrar->getValor !=n)){
				anterior = borrar;
				borrar =borrar->getSiguiente;
			}
			if(borrar ==NULL){
				cout<<"Elemento no encontrado"<<endl;
			}
			if(anterior == NULL){
				Lista = Lista->getSiguiente;
				delete borrar;
			}
			else{
				anterior->getSiguiente=borrar->getSiguiente;
				delete borrar;
			}
		}
		
};
