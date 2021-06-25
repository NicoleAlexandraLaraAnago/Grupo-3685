#include <iostream>
#include "Fecha.h"

class Tabla{
private:
    Fecha *fechaPago;
    float total;
    int cuotas;
    int plazo;
    float porcentajeInteres=5;

public:
    Tabla(Fecha *fecha,float total,int cuotas,int plazo,float porcentajeInteres);
    Tabla();
    Tabla* generarTabla();
    void imprimirTabla();

    void setFechaPago(Fecha*);
    void setTotal(float);
    void setNumCuotas(int);
    void setPorcentajeInteres(float);
    void setCuotas(int);
    Fecha* getFechaPago();
    float getTotal();
    int getNumCuotas();
    float getPorcentajeInteres();
    int getCuotas();
    friend class Persona;

};



