
#include<iostream>
#include"Matriz.h"

Matriz::Matriz::Matriz(){
	
}

Matriz::Matriz(int **_matriz1,int **_matriz2, int **_matrizR,int _dim){
	this->matriz1 = _matriz1;
	this->matriz2 = _matriz2;
	this->matrizR = _matrizR;
	this->dim = _dim;
}

int Matriz::getDim(){
	return dim;
}

void Matriz::setDim(int _dim){
	this->dim = _dim;
}

int** Matriz::getMatriz1(){
   return matriz1;
}

void Matriz::setMatriz1(int **_matriz1){
	this->matriz1 = _matriz1;
}

int** Matriz::getMatriz2(){
   return matriz2;
}

void Matriz::setMatriz2(int **_matriz2){
	this->matriz2 = _matriz2;
}

int** Matriz::getMatrizR(){
   return matrizR;
}

void Matriz::setMatrizR(int **_matrizR){
	this->matrizR = _matrizR;
}

