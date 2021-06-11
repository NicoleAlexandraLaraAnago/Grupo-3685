/*
UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE							   
Titulo: Lista
Autor: Stalin Rivera											       
Fecha: 08/06/2021													   
Fecha de modificacion: 10/06/2021								   
*/
class Nodo{
	private:
		int valor;	
		Nodo *siguiente;
	public:
		Nodo (int val, Nodo *sig=NULL){
			this->valor=val;
			this->siguiente=sig;
		}
		
	friend class Lista;
};
