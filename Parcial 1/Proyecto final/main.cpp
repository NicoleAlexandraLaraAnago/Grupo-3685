#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Persona.h"
#include"Menu.h"

int main(){
	
	string nombre;
	string apellido;
    long CI;
    int edad;
    string localizacion;
    long telefono;
    float sueldo;
	string dato;
	int numero;
	string correo;
	string fecha;
	Persona persona1(nombre, apellido, CI, edad, 
	localizacion, telefono, sueldo,correo,fecha);
	Menu menu;
	int opcion;
	do{
		opcion = menu.menu();
		switch(opcion){
			case 0:
			//	do{
					system("cls");
					//cout << "Introduzca un dato: ";
					//cin >> dato;
					//numero = atoi(dato.c_str());
			//	}while(menu.repetir() != 1);
				do{
					cout<<"PERSONA"<<endl;
    cout<<"Digite su nombre: ";
    cin>> nombre;

    cout<<"Numero de cedula: ";
    cin>>CI;

    cout<<"Digite su edad: ";
    cin>>edad;

    cout<<"Digite su lugar de localizacion: ";
    cin>>localizacion;

    cout<<"Numero telefonico: ";
    cin>>telefono;

    cout<<"Digite su sueldo: ";
    cin>>sueldo;
    numero = atoi(dato.c_str());
					
				}while(menu.repetir() != 1);				
				break;	
			case 1:
				do{	
					system("cls");	
					cout << "Introduzca la cedula: ";
					cin >> dato;
					numero = atoi(dato.c_str());
				}while(menu.repetir() != 1);
				//cola
				break;
			case 2:				
					system("cls");
					system("pause");					
				break;
			default:
				cout << "Saliendo.....";
				break;			
		}
	}while(opcion != 3);	
	//crea el Objeto 

	persona1.SetNombre(nombre);
    persona1.SetNombre(apellido);
    persona1.SetNombre(correo);
    persona1.SetCI(CI);
    persona1.SetEdad(edad);
    persona1.SetLocalizacion(localizacion);
    persona1.SetTelefono(telefono);
    persona1.SetSueldo(sueldo);
    cout<<"\n\n";
    cout<<"DATOS PERSONALES\n";
    cout<<"Nombre: "<< persona1.GetNombre()<<endl;
    cout<<"Nombre: "<< persona1.GetApellido()<<endl;
    cout<<"CI: "<<persona1.GetCI()<<endl;
    cout<<"Edad: "<<persona1.GetEdad()<<endl;
    cout<<"Localiazcion: "<<persona1.GetLocalizacion()<<endl;
    cout<<"Telefono: "<<persona1.GetTelefono()<<endl;
    cout<<"Sueldo: "<<persona1.GetSueldo()<<endl;
    cout<<"Correo: "<<persona1.GetCorreo()<<endl;
    cout<<"Fecha de pago: "<<persona1.GetFecha();
	
	system("pause");
	return 0;
}
