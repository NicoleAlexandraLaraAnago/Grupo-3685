/*
UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE							   
Titulo: Lista
Autor: Stalin Rivera											       
Fecha: 08/06/2021													   
Fecha de modificacion: 10/06/2021								   
*/
#include <iostream>
#include <cstring>
#include "Lista.h"
#include "IngresoDatos.h"

using namespace std;

void menu();

int main(int argc, char** argv) {
	int opc, newDato;
	Lista list;
	do{
		menu();
		cin>>opc;
		switch(opc){
			case 1:
				cout<<"Ingresar el dato a insertar: ";
				cin>>newDato;
				list.insertarInicio(newDato);
				break;
			case 2:
				cout<<"Ingresar el dato a insertar: ";
				cin>>newDato;
				list.insertarFinal(newDato);
				break;
			case 3:
				list.imprimir();
				break;
			case 4:
				int pos;
				cout<<"Ingrese el elemento: ";
				cin>>newDato;
				cout<<"Ingrese la posicion: ";
				cin>>pos;
				list.insertarEntre(newDato,pos);
				break;
			case 5:
				cout<<"Ingrese la lista que quiere eliminar: ";
				cin>>newDato;
				cout<<"Ingrese la posicion que quiere eliminar: ";
				cin>>pos;
				list.eliminar();
			case 6:
				break;
		}
		system("pause");
		system("cls");
	}while(opc!=5);
	system("pause");
	return 0;
}

void menu(){
    cout<<"\n\t\tLISTA\n\n";
    cout<<" 1. INSERTAR AL INICIO               "<<endl;
    cout<<" 2. INSERTAR AL FINAL                "<<endl;
    cout<<" 3. REPORTAR LISTA                   "<<endl;
    cout<<" 4. INSERTAR ENTRE                   "<<endl;
    cout<<" 5. ELIMINAR LISTA                   "<<endl;
    cout<<" 6. SALIR                            "<<endl;
 
    cout<<"\n INGRESE OPCION: ";
}
