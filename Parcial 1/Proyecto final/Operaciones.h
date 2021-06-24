#include "Persona.h"
#include<iostream>
#include<string>

using namespace std;
string generarCorreo(Persona persona,string indice){
	string nombre = persona.getNombre();
	string correo = "";
	string separador = " ";
	string token;
	int i = 0;
	
	size_t posicion = 0;
	
	while((posicion = nombre.find(separador)) != string::npos){
		token = nombre.substr(0,posicion);		
		correo += token[0];
		nombre.erase(0, posicion + separador.length());				
	}
	correo += nombre[0];	
	correo += persona.getApellido();
	correo += indice ;
	correo += "@espe.edu.ec";
	return correo;		
}

