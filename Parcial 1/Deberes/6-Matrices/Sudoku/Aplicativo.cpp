#include <iostream>
#include "Sudoku.h"

using namespace std;

int main() {
	Sudoku* s1 = new Sudoku();
	int fila, columna, dato;
	while(s1->obtenerResto()>0){
		s1->imprimir();
		cout<<"Ingrese el numero de la fila, columna y dato (entre el 1 y 9)";
		cin>>fila>>columna>>dato;
		if(fila>=1 && fila <=9 && columna>=1 && columna <=9){
			if(!s1->jugar(fila-1,columna-1,dato)){
				cout<<"Jugada incorrecta"<<endl;
			}
		}
		else{
			cout<<"Jugada Ilegal"<<endl;
		}
	}
	//delete s1;
	return 0;
}
