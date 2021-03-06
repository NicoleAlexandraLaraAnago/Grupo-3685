#include <iostream>
#include <string>
#include "Persona.h"
#include "Validaciones.h"


using namespace std;

Persona::Persona(string _nombre, string _apellido, long int _CI, Fecha *_edad, string _localizacion, string _telefono, float _sueldo, string _correo,Tabla *_tabla){
    this->nombre = _nombre;
    this->apellido = _apellido;
    this->CI = _CI;
    this->fechaNacimiento = _edad;
    this->localizacion = _localizacion;
    this->telefono = _telefono;
    this->sueldo = _sueldo;
    this->correo = _correo;
    this->tabla = _tabla;
}
Persona::Persona(){
    this->nombre = "usuario";
    this->apellido = "usuario";
    this->CI = 99999;
    this->localizacion = "no definido";
    this->telefono = "99999";
    this->sueldo = 99999;
    this->correo = "no definido";
}

Persona Persona::nuevaPersona(){
    string _nombre,_apellido,_localizacion,_correo,_telefono;
    long int _CI;
    float _sueldo;
    cout<<"PERSONA"<<endl;
    cout<<"Digite sus nombres: ";cin>> _nombre;
    nombre=_nombre;
    cout<<"Digite su apellido: ";cin>> _apellido;
    apellido=_apellido;
    cout<<"Numero de cedula: "; cin>>_CI;
    _CI = validarCedula(_CI);
    cout<<"Ingrese su fecha de nacimiento.\n";
    fechaNacimiento = fechaNacimiento->ingresarFecha();
    cout<<"Digite su lugar de localizacion: "; cin>>_localizacion;
    fflush(stdin);
    cout<<"Numero telefonico: "; getline(cin,_telefono);
    _telefono = ValidarTelefono(_telefono);
    cout<<"Digite su sueldo: "; cin>>_sueldo;
    generarCorreo(0);
    tabla = tabla->generarTabla();
    Persona tmp(_nombre,_apellido,_CI,fechaNacimiento,_localizacion,_telefono,_sueldo,correo,tabla);
    return tmp;
}

void Persona::generarCorreo(int cont){
    string localNonbre = nombre;
    string localApellido = apellido;
    for (int i = 0; i < localNonbre.length(); i++) localNonbre[i] = tolower(localNonbre[i]);
    for (int i = 0; i < localApellido.length(); i++) localApellido[i] = tolower(localApellido[i]);
    if(cont==0){
        correo=localNonbre[0]+localApellido+"@espe.edu.ec";
    }else{
        correo=localNonbre[0]+localApellido+to_string(cont)+"@espe.edu.ec";
    }
}

/*-----------------setters-----------------*/

void Persona :: setNombre(string _nombre){
    nombre = _nombre;
}
void Persona :: setApellido(string _apellido){
    apellido = _apellido;
}
void Persona :: setCI(long _CI){
    CI = _CI;
}
void Persona :: setLocalizacion(string _localizacion){
    localizacion = _localizacion;
}
void Persona :: setTelefono(string _telefono){
    telefono = _telefono;
}
void Persona :: setSueldo(float _sueldo){
    sueldo = _sueldo;
}
void Persona :: setCorreo(string _correo){
    correo = _correo;
}

/*-----------------getters------------------*/
Fecha* Persona::getFechaNacimiento(){
    return fechaNacimiento;
}
Tabla* Persona::getTabla(){
    return tabla;
}
string Persona :: getNombre(){
    return nombre;
}
string Persona :: getApellido(){
    return apellido;
}
long Persona :: getCI(){
    return CI;
}
string Persona :: getLocalizacion(){
    return localizacion;
}
string Persona :: getTelefono(){
    return telefono;
}
float Persona :: getSueldo(){
    return sueldo;
}
string Persona :: getCorreo(){
    return correo;
}

