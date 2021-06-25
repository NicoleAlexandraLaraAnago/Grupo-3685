#include "Archivo.h"
#include<time.h>
#include <windows.h>
#include <string>
#include <ctime>
#include<iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;
Archivo::Archivo(){

}

void Archivo::crearArchivo(Persona persona){
    ofstream archivo;
    archivo.open("Datos.txt", ios::out);

    if(archivo.fail()){
        cout<<"ERROR!! EL ARCHIVO NO SE HA CREADO ";
        exit(1);
    }
    Fecha *tmpFecha = new Fecha();
    tmpFecha=persona.getFechaNacimiento();
    Tabla *tmpTabla = new Tabla();
    tmpTabla = persona.getTabla();
    archivo << "Nombre: " <<persona.getNombre()<<endl;
    archivo << "Apellido: " <<persona.getApellido()<<endl;
    archivo << "Cedula: " <<persona.getCI()<<endl;
    archivo << "Fecha de nacimiento: "<<tmpFecha->getDay()<<"/"<<tmpFecha->getMonth()<<"/"<<tmpFecha->getYear()<<endl;
    archivo << "Edad: "<<tmpFecha->_edad()<<endl;
    archivo << "Localización: " <<persona.getLocalizacion()<<endl;
    archivo << "Telefono: " <<persona.getTelefono()<<endl;
    archivo << "Sueldo: " <<persona.getSueldo()<<endl;
    archivo << "Correo: " <<persona.getCorreo()<<endl;
    archivo<<"Vencimiento\t\tPago\t\tInteres\t\tAmortizacion\t\tSaldo\n";
    int cont=0;
    float amortizacion=0,saldo= tmpTabla->getTotal(),pagos=0,interes=0;
    int plazo=tmpTabla->getNumCuotas();
    string tmp;
    while (cont<=plazo)
    {
        tmp = tmpTabla->guardarDiaDePago(tmpTabla->getFechaPago(),cont);
        archivo<<tmp<<"\t\t"<<pagos<<"\t\t"<<interes<<"\t\t"<<amortizacion<<"\t\t"<<saldo<<endl;
        pagos=tmpTabla->calcularPagos();
        interes = tmpTabla->calcularInteres(saldo);
        amortizacion=pagos-interes;
        saldo=saldo-amortizacion;
        cont++;
    }
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
