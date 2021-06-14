#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Persona.h"

using namespace std;


int main(){
	string nombre;
	string apellido;
	string correo;
    long CI;
    int edad;
    string localizacion;
    long telefono;
    float sueldo;

    cout<<"PERSONA"<<endl;
    cout<<"Digite su nombre: ";
    cin>> nombre;
    
    cout<<"Digite su apellido: ";
    cin>> apellido;

    cout<<"Numero de cedula: ";
    cin>>CI;

    cout<<"Digite su edad: ";
    cin>>edad;

    cout<<"Digite su lugar de direccion: ";
    cin>>localizacion;

    cout<<"Numero telefonico: ";
    cin>>telefono;

    cout<<"Digite su sueldo o monto que recibe: ";
    cin>>sueldo;
    
    cout<<"Digite su correo: ";
    cin>>correo;
    
    /*creando objeto*/
    Persona persona1(nombre, apellido, CI, edad, localizacion, telefono, sueldo,correo);

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
	
	system("pause");
	return 0;	
}
