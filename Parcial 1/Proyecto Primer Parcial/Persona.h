#include <iostream>

using namespace std;
/*class Persona
{
public:
   std::string getNombre(void);
   void setNombre(std::string newNombre);
   std::string getApellido(void);
   void setApellido(std::string newApellido);
   std::string getCedula(void);
   void setCedula(std::string newCedula);
   std::string getCorreo(void);
   void setCorreo(std::string newCorreo);

protected:
private:
   std::string nombre;
   std::string apellido;
   std::string cedula;
   std::string correo;

};

//#endif
*/

class Persona{
    
    private:
        string nombre;
        string apellido;
        long CI;
        int edad;
        string localizacion;
        long telefono;
        float sueldo;
        string correo;

    public:
        Persona(string, string, long, int, string, long, float,string);
        
        
        void SetNombre(string);
        void SetApellido(string);
        void SetCI(long);
        void SetEdad(int);
        void SetLocalizacion(string);
        void SetTelefono(long);
        void SetSueldo(float);
        void SetCorreo(string);

        string GetNombre();
        string GetApellido();
        long GetCI();
        int GetEdad();
        string GetLocalizacion();
        long GetTelefono();
        float GetSueldo();
        string GetCorreo();

        
};
