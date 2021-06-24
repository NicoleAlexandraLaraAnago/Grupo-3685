#pragma once
#include "nodo.h"
#include <functional>

class ListaDobleEnlazada {
    public:
        ListaDobleEnlazada() = default;
        void insertar(Persona persona);
        void insertar_inicio(Persona persona);
        void insertar_en(int indice, Persona persona);
        void eliminar(int indice);
        void recorrer(std::function<void(Persona, int)> callback);
        int get_tamanio();

    private:
        Nodo *ultimo_nodo();
        Nodo *obtener_nodo(int indice);

        Nodo *cabeza = nullptr;
        int tamanio = 0;
};
