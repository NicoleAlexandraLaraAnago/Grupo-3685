/*Universidad de las Fuerzas Armadas ESPE
Título: Memoria Dinamica
#Grupo
Autor/es: Kevin Condor, Nicole Lara, Cristian Maranje, Stalin Rivera, Shirley otuna
Fecha de creacíon: 02/06/2021
Fecha de modificación: 03/06/2021
Ingeniería en Software
Estructura de Datos*/

#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<stdio.h>


#include "Operaciones.h"

using namespace std;

int main(){
	srand(time(NULL));
	int ** m1, **m2, **mr;
	int dim, exp;
	//Matriz mat1,mat2,matr;
	printf("Ingrese la dimension de las matrices\n");
	scanf("%1d",&dim);
	Matriz mat1 (m1,m2,mr,dim);
	Operaciones op (mat1);
	op.segmentar1();
	op.generar1();
	op.imprimir1();
	op.segmentar2();
	op.generar2();
	op.imprimir2();
	op.segmentarR();
	op.encerarR();
	op.procesarMulti();
	op.imprimirR();
	
	printf("Ingrese el exponente a elevar\n");
	scanf("%1d",&exp);
	if(exp>1){
		op.encerarR();
		op.procesarPot(exp);
		op.imprimirR();
	}
	else{
		printf("El exponente ingresado debe ser mayor que 1\n");
	}
}
