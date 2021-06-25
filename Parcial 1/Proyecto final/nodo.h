#pragma once
<<<<<<< HEAD
#include<iostream>
using namespace std;
=======
#include "Persona.h"
>>>>>>> 6efe0f4498ef4bd2ae099565ac51b4962ebec7fa

class Nodo {
public:
    Nodo(Persona Persona);

    Nodo *get_siguiente();
    void set_siguiente(Nodo *nodo);
    
    Nodo *get_anterior();
    void set_anterior(Nodo *nodo);

    Persona get_persona();
    void set_persona(Persona persona);

private:
<<<<<<< HEAD
    int valor;
    Nodo *siguiente = NULL;//nullptr;
    Nodo *anterior = NULL;//nullptr;
=======
    Persona persona;
    Nodo *siguiente = nullptr;
    Nodo *anterior = nullptr;
>>>>>>> 6efe0f4498ef4bd2ae099565ac51b4962ebec7fa
};
