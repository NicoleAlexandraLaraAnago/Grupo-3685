#pragma once
#include "Persona.h"

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
    Persona persona;
    Nodo *siguiente = nullptr;
    Nodo *anterior = nullptr;
};
