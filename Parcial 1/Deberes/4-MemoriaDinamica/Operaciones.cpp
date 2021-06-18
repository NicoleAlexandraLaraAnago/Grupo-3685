#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

#include "Operaciones.h"


using namespace std; 

Operaciones::Operaciones(){
	
}

Operaciones::Operaciones(Matriz m1){
	this->_matriz = m1;
}

void Operaciones::segmentar1(){
	int **matriz, j;
	matriz=(int**)malloc(_matriz.getDim()*sizeof(int *));
	for(j=0;j<_matriz.getDim();j++){
		*(matriz+j)=(int *)malloc(_matriz.getDim() * sizeof(int*));
	}
	_matriz.setMatriz1(matriz);
}

void Operaciones::segmentar2(){
	int **matriz, j;
	matriz=(int**)malloc(_matriz.getDim()*sizeof(int *));
	for(j=0;j<_matriz.getDim();j++){
		*(matriz+j)=(int *)malloc(_matriz.getDim() * sizeof(int*));
	}
	_matriz.setMatriz2(matriz);
}

void Operaciones::segmentarR(){
	int **matriz, j;
	matriz=(int**)malloc(_matriz.getDim()*sizeof(int *));
	for(j=0;j<_matriz.getDim();j++){
		*(matriz+j)=(int *)malloc(_matriz.getDim() * sizeof(int*));
	}
	_matriz.setMatrizR(matriz);
}

void Operaciones::generar1(){
	for (int i = 0; i <_matriz.getDim(); i++){
		for (int j = 0; j <_matriz.getDim(); j++){
			*(*(_matriz.getMatriz1()+i)+j) = rand () % 3;	
		}
	}
}

void Operaciones::generar2(){
	for (int i = 0; i <_matriz.getDim(); i++){
		for (int j = 0; j <_matriz.getDim(); j++){
			*(*(_matriz.getMatriz2()+i)+j) = rand () % 10;	
		}
	}
}

void Operaciones::encerar1(){
    for(int i=0;i<_matriz.getDim();i++){
    	for(int j=0;j<_matriz.getDim();j++){
    		*(*(_matriz.getMatriz1() + i) + j) = 0;
		}
	}
}

void Operaciones::encerar2(){
	for(int i=0;i<_matriz.getDim();i++){
    	for(int j=0;j<_matriz.getDim();j++){
    		*(*(_matriz.getMatriz2() + i) + j) = 0;
		}
	}
}

void Operaciones::encerarR(){
	for(int i=0;i<_matriz.getDim();i++){
    	for(int j=0;j<_matriz.getDim();j++){
    		*(*(_matriz.getMatrizR() + i) + j) = 0;
		}
	}
}

void Operaciones::procesarPot(int exp){
	for(int e=1; e<exp;e++){
		for(int i =0;i<_matriz.getDim();i++){
			for(int j=0;j<_matriz.getDim();j++){
				for(int k=0;k<_matriz.getDim();k++){
					*(*(_matriz.getMatrizR()+i)+j) = *(*(_matriz.getMatrizR()+i)+j) + (*(*(_matriz.getMatriz1()+i)+k) * (*(*(_matriz.getMatriz1()+k)+j)));
				}
			}
		}
	}
}


void Operaciones::procesarMulti(){
	for(int i =0;i<_matriz.getDim();i++){
		for(int j=0;j<_matriz.getDim();j++){
			for(int k=0;k<_matriz.getDim();k++){
				*(*(_matriz.getMatrizR()+i)+j) = *(*(_matriz.getMatrizR()+i)+j) + (*(*(_matriz.getMatriz1()+i)+k) * (*(*(_matriz.getMatriz2()+k)+j)));
			}
		}
	}
}

void Operaciones::imprimir1(){
	printf("La matriz 1 es:\n");
    for(int i=0;i<_matriz.getDim();i++){
		for(int j=0;j<_matriz.getDim();j++){
			printf("%d",*(*(_matriz.getMatriz1() +i)+j));
			printf("%*s",j+5,"");
		}
		printf("\n");
	}
}
void Operaciones::imprimir2(){
	printf("La matriz 2 es:\n");
    for(int i=0;i<_matriz.getDim();i++){
		for(int j=0;j<_matriz.getDim();j++){
			printf("%d",*(*(_matriz.getMatriz2() +i)+j));
			printf("%*s",j+5,"");
		}
		printf("\n");
	}
}

void Operaciones::imprimirR(){
	printf("La matriz resultante es:\n");
    for(int i=0;i<_matriz.getDim();i++){
		for(int j=0;j<_matriz.getDim();j++){
			printf("%d",*(*(_matriz.getMatrizR() +i)+j));
			printf("%*s",j+5,"");
		}
		printf("\n");
	}
}
