#include <iostream>
#include "funcion.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	int num1,num2;
	
	cout<<"Mayor y menor que"<<endl;
	cout<<"Ingrese el primer numero : "; cin>>num1;
	cout<<"Ingrese el segundo numero : "; cin>>num2;
	mayor_menor(num1,num2);
	return 0;
}
