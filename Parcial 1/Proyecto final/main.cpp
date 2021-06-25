#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Persona.h"
#include "Menu.h"
#include "ListaDobleEnlazada.h"
#include "Archivo.h"
#include<locale.h>
#include<conio.h>
//void menu();

int main(){
	//menu();
	Archivo archivo;
	ListaDobleEnlazada listaDoble;
	string dato;
    int numero, opcion;
	long int indice1;
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
					listaDoble.eliminar(indice1);
				}while(menu.repetir() != 1);
				break;
			case 2:				
					system("cls");
					listaDoble.recorrer([](Persona persona , int indice){
						fflush(stdin);
						Fecha *tmpFechaNaci = new Fecha();
						Tabla *tmpTabla = new Tabla();
						tmpFechaNaci = persona.getFechaNacimiento();
						tmpTabla = persona.getTabla();
						std::cout<<"\n\nPersona->"<<indice<<
						"\nNombre:"<<persona.getNombre()<<
						"\nApellido:"<<persona.getApellido()<<
						"\nCI:"<<persona.getCI()<<
						"\nTelefono:"<<persona.getTelefono()<<
						"\nEdad:"<<tmpFechaNaci->_edad()<<
						"\nCorreo:"<<persona.getCorreo()<<"\n";
						tmpTabla->imprimirTabla();
					});
					system("pause");					
				break;
			default:
				listaDoble.guardar();
				cout << "Saliendo.....\n";
				break;			
		}
	}while(opcion != 3);	

	system("pause");
	return 0;
}

/*void menu(){
	setlocale(LC_CTYPE, "spanish");


	int opcion=0;
	string  dato, buscar;
	Persona objPersona;
	ListaDobleEnlazada objLista;
	Archivo objArchivo;




	while(opcion !=5){


		cout<<"\n\nDigite una opción: ";
		cout<<"1. Ingresar: \n";
		cout<<"2. Eliminar: \n";
		cout<<"3. mostrar: \n";
		cout<<"4. Salir: \n";


		cin>>opcion;
				system("cls");

		if (opcion == 1) {

			cout << "Digite su nombre: ";
			cin >> dato;
			objPersona.setNombre(dato);

			cout << "Digite su apellido: ";
			cin >> dato;
			objPersona.setApellido(dato);

			cout << "Digite su cédula: ";
			cin >> dato;
			objPersona.setCedula(dato);

			int edad;
			cout << "Digite su edad: ";
			cin >> edad;
			objPersona.setEdad(edad);

			objLista.insertar(objPersona);

			objArchivo.crearArchivo(objPersona);

			objArchivo.backUp();

			cout << endl;
			system("pause");
			system("cls");
		}
		else if (opcion == 2) {

			cout << "\t\tLista de personas";
			objLista.mostrar();

			cout << endl;
			system("pause");
			system("cls");
		}
		else if (opcion == 3) {
			
			cout << "Digite el número de cedula: ";
			cin >> buscar;

			objLista.buscar(objPersona, buscar);
			
			cout << endl;
			system("pause");
			system("cls");
		}
		else if (opcion == 4) {

			objLista.ordenar();

		}


	}
}*/
