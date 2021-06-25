#include "Archivo.h"
#include<time.h>
#include <windows.h>
#include <string>
#include <ctime>
#include<iostream>
using namespace std;
Archivo::Archivo(){

}

void Archivo::crearArchivo(Persona persona){
    int opcion;
    ofstream archivo;
    archivo.open("Datos.txt", ios::out | ios::app );

    if(archivo.fail()){
        cout<<"ERROR!! EL ARCHIVO NO SE HA CREADO ";
        exit(1);
    }
    
    cout<<"\\nDatos de las personas insertadas"<<endl;
    archivo << "Nombre: " <<persona.getNombre()<<endl;
    archivo << "Apellido: " <<persona.getApellido()<<endl;
    archivo << "Cedula: " <<persona.getCI()<<endl;
    archivo << "Localización: " <<persona.getLocalizacion()<<endl;
    archivo << "Telefono: " <<persona.getTelefono()<<endl;
    archivo << "Sueldo: " <<persona.getSueldo()<<endl;
    archivo << "Correo: " <<persona.getCorreo()<<endl;
    archivo << "\n\n";
    archivo.close();


}
#pragma warning(disable : 4996) 

void Archivo::backUp() {

	time_t tSac = time(NULL);
	struct tm* tmP = localtime(&tSac);
	char fecha[24];
	strftime(fecha, 24, "%d-%m-%y/%H-%M-%S.txt", tmP);//%d-%b-%y; %H-%M-%S

	char comando[64];

	strcpy(comando, "Datos.txt ");
	strcat(comando, fecha);
	system(comando);

}
