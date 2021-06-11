/*Universidad de las Fuerzas Armadas ESPE
Tpitulo: Estructura en C++
Autor/es: Nicole Lara
Fecha de creación: 18/05/2021
Fecha de modificación:
Ingeniería de Software
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


