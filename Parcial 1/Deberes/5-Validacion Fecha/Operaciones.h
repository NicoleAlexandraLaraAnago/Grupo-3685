#pragma once
#include <iostream>
#include <string>
#include "Fecha.h"

using namespace std;

class Operaciones{
    protected:
        private:
            Fecha fecha;
            string dia[5];
            string mes[12];
    public:
        Operaciones(Fecha);
        string dSemana(int);
        string mAnio(int);
        int limiteDePago();
        void ingresarFecha();
        bool comprobarFecha();
        void generacionInformacion();
        void generaFecha(int);
};
