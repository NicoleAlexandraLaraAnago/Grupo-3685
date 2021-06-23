#include "Persona.h"
#include "Validaciones.h"
#include "Fecha.h"
#include "Menu.h"
Persona :: Persona(string _nombre, string _apellido, long int _CI, 
int _edad, string _localizacion, long int _telefono, float _sueldo, 
string _correo, string _fecha){
    this->nombre = _nombre;
    this->apellido = _apellido;
    this->CI = _CI;
    this->edad = _edad;
    this->localizacion = _localizacion;
    this->telefono = _telefono;
    this->sueldo = _sueldo;
    this->correo = _correo;
    this->fecha = _fecha;
}

Persona::Persona(){
    this->nombre = "usuario";
    this->apellido = "usuario";
    this->CI = 99999;
    this->edad = 0;
    this->localizacion = "no definido";
    this->telefono = 99999;
    this->sueldo = 99999;
    this->correo = "no definido";
    this->fecha ="no definido";
}

Persona Persona::nuevaPersona(){
	int opcion;
	Fecha F1;
	F1._edad();
    string _nombre,_apellido,_localizacion;
    long int _CI,_telefono;
    int _edad;
    float _sueldo;
    cout<<"PERSONA"<<endl;
    cout<<"Digite sus nombres: ";cin>> _nombre;
    cout<<"Digite su apellido: ";cin>> _apellido;
    cout<<"Numero de cedula: "; cin>>_CI;
    _CI = validarCedula(_CI);
    cout<<"Digite su edad: "<<endl;
    Menu menu;
        do{
        	Fecha F1;
        	F1._edad();
    	
	}while (opcion != 3 );
    cout<<"Digite su lugar de localizacion: "; cin>>_localizacion;
    cout<<"Numero telefonico: "; cin>>_telefono;

    cout<<"Digite su sueldo: "; cin>>_sueldo;
    Persona tmp(_nombre,_apellido,_CI,_edad,_localizacion,_telefono,_sueldo,"no definido","no definido");
    return tmp;
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
void Persona :: setEdad(int _edad){
    edad = _edad;
}
void Persona :: setLocalizacion(string _localizacion){
    localizacion = _localizacion;
}
void Persona :: setTelefono(long _telefono){
    telefono = _telefono;
}
void Persona :: setSueldo(float _sueldo){
    sueldo = _sueldo;
}
void Persona :: setCorreo(string _correo){
    correo = _correo;
}

void Persona :: setFecha(string _fecha){
   fecha = _fecha;
}

/*-----------------getters------------------*/

string Persona :: getNombre(){
    return nombre;
}
string Persona :: getApellido(){
    return apellido;
}
long Persona :: getCI(){
    return CI;
}
int Persona :: getEdad(){
    return edad;
}
string Persona :: getLocalizacion(){
    return localizacion;
}
long Persona :: getTelefono(){
    return telefono;
}
float Persona :: getSueldo(){
    return sueldo;
}
string Persona :: getCorreo(){
    return correo;
}
string Persona :: getFecha(){
    return fecha;
}

