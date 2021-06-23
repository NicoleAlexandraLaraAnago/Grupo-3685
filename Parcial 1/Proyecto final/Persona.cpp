#include "Persona.h"
Persona :: Persona(string _nombre, string _apellido, long _CI, 
int _edad, string _localizacion, long _telefono, float _sueldo, 
string _correo, string _fecha){
    _nombre = nombre;
    _apellido = apellido;
    _CI = CI;
    _edad = edad;
    _localizacion = localizacion;
    _telefono = telefono;
    _sueldo = sueldo;
    _correo = correo;
    _fecha = fecha;
}
/*-----------------setters-----------------*/

void Persona :: SetNombre(string _nombre){
    nombre = _nombre;
}
void Persona :: SetApellido(string _apellido){
    apellido = _apellido;
}
void Persona :: SetCI(long _CI){
    CI = _CI;
}
void Persona :: SetEdad(int _edad){
    edad = _edad;
}
void Persona :: SetLocalizacion(string _localizacion){
    localizacion = _localizacion;
}
void Persona :: SetTelefono(long _telefono){
    telefono = _telefono;
}
void Persona :: SetSueldo(float _sueldo){
    sueldo = _sueldo;
}
void Persona :: SetCorreo(string _correo){
    correo = _correo;
}

//void Persona :: SetFecha(string _fecha){
 //   fecha = _fecha;
//}

/*-----------------getters------------------*/

string Persona :: GetNombre(){
    return nombre;
}
string Persona :: GetApellido(){
    return apellido;
}
long Persona :: GetCI(){
    return CI;
}
int Persona :: GetEdad(){
    return edad;
}
string Persona :: GetLocalizacion(){
    return localizacion;
}
long Persona :: GetTelefono(){
    return telefono;
}
float Persona :: GetSueldo(){
    return sueldo;
}
string Persona :: GetCorreo(){
    return correo;
}
string Persona :: GetFecha(){
    return fecha;
}
/*
std::string Persona::getNombre(void)
{
   return nombre;
}

void Persona::setNombre(std::string newNombre)
{
   nombre = newNombre;
}

std::string Persona::getApellido(void)
{
   return apellido;
}

void Persona::setApellido(std::string newApellido)
{
   apellido = newApellido;
}

std::string Persona::getCedula(void)
{
   return cedula;
}

void Persona::setCedula(std::string newCedula)
{
   cedula = newCedula;
}

std::string Persona::getCorreo(void)
{
   return correo;
}

void Persona::setCorreo(std::string newCorreo)
{
   correo = newCorreo;
}*/

