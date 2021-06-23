#include <iostream>

using namespace std;

class Persona{
    
    private:
        string nombre;
        string apellido;
        long int CI;
        int edad;
        string localizacion;
        long telefono;
        float sueldo;
        string correo;
        string fecha;

    public:
        Persona(string, string, long int, int, string, long int, float,string, string);
        Persona();
        Persona nuevaPersona();
        
        
        void setNombre(string);
        void setApellido(string);
        void setCI(long);
        void setEdad(int);
        void setLocalizacion(string);
        void setTelefono(long);
        void setSueldo(float);
        void setCorreo(string);
        void setFecha(string);

        string getNombre();
        string getApellido();
        long getCI();
        int getEdad();
        string getLocalizacion();
        long getTelefono();
        float getSueldo();
        string getCorreo();
        string getFecha();
        

        
};

