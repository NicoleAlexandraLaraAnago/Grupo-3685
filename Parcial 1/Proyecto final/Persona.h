#include <iostream>
#include "Fecha.h"
#pragma once
using namespace std;

class Persona{
    
    private:
        string nombre;
        string apellido;
        long int CI;
        Fecha fechaNacimiento;
        string localizacion;
        long int telefono;
        float sueldo;
        string correo;
        string fecha;

    public:
        Persona(string _nombre, string _apellido, long int _CI, Fecha _edad, string _localizacion, long int _telefono, float _sueldo, string _correo, string _fecha);
        Persona();
        Persona nuevaPersona();
        
        void setNombre(string);
        void setApellido(string);
        void setCI(long);
        void setLocalizacion(string);
        void setTelefono(long);
        void setSueldo(float);
        void setCorreo(string);
        void setFecha(string);

        string getNombre();
        string getApellido();
        long getCI();
        string getLocalizacion();
        long getTelefono();
        float getSueldo();
        string getCorreo();
        string getFecha();
        

        
};

