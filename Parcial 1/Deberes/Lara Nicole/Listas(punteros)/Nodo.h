/*Universidad de las Fuerzas Armadas ESPE
Tpitulo: Estructura en C++
Autor/es: Nicole Lara
Fecha de creaci�n: 18/05/2021
Fecha de modificaci�n:
Ingenier�a de Software
Estructura de Datos*/


class Nodo {
	private:
	int valor;
	Nodo *siguiente;
	public:
	int setValor(int val){
		valor = val;
	}
	Nodo setSiguiente(Nodo *sig){
		siguiente = sig;
	}
	int getValor(){
		return valor;
	}
	Nodo *getSiguiente(){
		return siguiente;
	}
	Nodo (int val, Nodo *sig = 0){
		this -> valor =val;
		this->siguiente=sig;
	}
	friend class Lista;
		
};


