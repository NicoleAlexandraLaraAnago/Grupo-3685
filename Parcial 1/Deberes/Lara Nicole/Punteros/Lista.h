#include "Nodo.h"
class Lista{
	private: 
	Nodo *primero;
	Nodo *actual;
	bool ListaVacia(){
		return (this->primero==NULL);
	}
	public:
		Lista(){
			this->primero=NULL;
			this->actual=NULL;*/ //Es lo que está en el constructor
		}
		void insertar(int val){
			Nodo *nuevo=new Nodo(v);
			if(listaVacia()){
				this ->primero=actual;
			}
			else{
				this->actual->siguiente=nuevo;
			}
			this ->actual=nuevo;
		}
		void mostrar(){
			Nodo *tmp=this->primero;
			while(tmp){
				cout<<tmp->valor<< "-->";
				tmp=tmp->siguiente;
			}
			cout<<"NULL\n"<<endl;
		}
}*
