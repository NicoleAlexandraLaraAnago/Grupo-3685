#include "nodo.h"

Nodo::Nodo(Persona persona) {
    this->persona = persona;
}

Nodo *Nodo::get_anterior() {
    return anterior;
}

void Nodo::set_anterior(Nodo *nodo) {
    this->anterior = nodo;
}

Nodo *Nodo::get_siguiente() {
    return siguiente;
}

void Nodo::set_siguiente(Nodo *nodo) {
    this->siguiente = nodo;
}

Persona Nodo::get_persona() {
    return persona;
}

void Nodo::set_persona(Persona persona) {
    this->persona = persona;
}
