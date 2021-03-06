#include "Fecha.h"
#include "Tabla.h"
#include <iostream>
#pragma once
using namespace std;

class Persona{
    
    private:
        string nombre;
        string apellido;
        long int CI;
        Fecha *fechaNacimiento;
        string localizacion;
        string telefono;
        float sueldo;
        string correo;
        Tabla *tabla;

    public:
        Persona(string _nombre, string _apellido, long int _CI, Fecha *_edad, string _localizacion, string _telefono, float _sueldo, string _correo,Tabla *_tabla);
        Persona();
        Persona nuevaPersona();
        void generarCorreo(int);

        void setNombre(string);
        void setApellido(string);
        void setCI(long int);
        void setLocalizacion(string);
        void setTelefono(string);
        void setSueldo(float);
        void setCorreo(string);

        string getNombre();
        string getApellido();
        long getCI();
        string getLocalizacion();
        string getTelefono();
        float getSueldo();
        string getCorreo();
        Fecha* getFechaNacimiento();
        Tabla* getTabla();
};

