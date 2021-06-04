/*Universidad de las Fuerzas Armadas ESPE
T�tulo: Plantillas
#Grupo
Autor/es: Kevin Condor, Nicole Lara, Cristian Maranje, Stalin Rivera, Shirley otuna
Fecha de creac�on: 02/06/2021
Fecha de modificaci�n: 03/06/2021
Ingenier�a en Software
Estructura de Datos*/

#if !defined(__Class_Diagram_1_Fecha_h)
#define __Class_Diagram_1_Fecha_h

class Fecha
{
public:
   int getDia(void);
   void setDia(int newDia);
   int getMes(void);
   void setMes(int newMes);
   int getAnio(void);
   void setAnio(int newAnio);
   Fecha();
   Fecha(int _dia, int _mes, int _anio);
   ~Fecha();

protected:
private:
   int dia;
   int mes;
   int anio;


};

#endif
