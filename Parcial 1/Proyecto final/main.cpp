#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Persona.h"
#include "Menu.h"
#include "ListaDobleEnlazada.h"

int main(){
	ListaDobleEnlazada listaDoble;
	string dato;
    int numero, opcion,indice1;
	Persona persona1;
	Menu menu;
	do{
		opcion = menu.menu();
		switch(opcion){
			case 0:
				do{
					system("cls");
					persona1 = persona1.nuevaPersona();
					string lCorreo = persona1.getCorreo();
    				int cont=0;
    				listaDoble.recorrer([&](Persona persona,int indice){
        				if(persona.getCorreo()==lCorreo){
            				cont++;
        				}
    				});
    				if(cont>=1){
        				persona1.generarCorreo(cont);
    				}
					listaDoble.insertar(persona1);
				}while(menu.repetir() != 1);
				system("cls");	
				break;

			case 1:
				do{	
					system("cls");	
					cout<<"Ingrese el indice de la persona que desea eliminar: ";cin>>indice1;
					// cout << "Introduzca la cedula: "; cin >> dato;
					// numero = atoi(dato.c_str());
				}while(menu.repetir() != 1);
				//cola
				break;
			case 2:				
					system("cls");
					listaDoble.recorrer([](Persona persona , int indice){
						//impresion temporal
						Fecha *tmpFechaNaci = new Fecha();
						tmpFechaNaci = persona.getFechaNacimiento();
						std::cout<<"\n\nPersona."<<indice<<
						"\nNombre: "<<persona.getNombre()<<
						"\nApellido: "<<persona.getApellido()<<
						"\nCI: "<<persona.getCI()<<
						"\nTelefono: "<<persona.getTelefono()<<
						"\nEdad: "<<tmpFechaNaci->_edad()<<
						"\nCorreo: "<<persona.getCorreo()<<"\n";
					});
					system("pause");					
				break;
			default:
				cout << "Saliendo.....\n";
				break;			
		}
	}while(opcion != 3);	

	system("pause");
	return 0;
}
