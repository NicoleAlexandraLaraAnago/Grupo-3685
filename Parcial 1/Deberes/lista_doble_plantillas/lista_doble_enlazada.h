#pragma once
#include "nodo.h"
#include <functional>
#include <stdexcept>
#include <exception>

template <typename T>
class ListaDobleEnlazada {
public:
    ListaDobleEnlazada() = default;
    void insertar(T valor);
    void insertar_inicio(T valor);
    void insertar_en(int indice, T valor);
    void eliminar(int indice);
    void recorrer(std::function<void(T, int)> callback);
    int get_tamanio();

private:
    Nodo<T> *ultimo_nodo();
    Nodo<T> *obtener_nodo(int indice);

    Nodo<T> *cabeza = nullptr;
    int tamanio = 0;
};

///////////////////////////////////////////////////////////////////////////////////////////////////

template <typename T>
void ListaDobleEnlazada<T>::insertar(T valor) {
    Nodo<T> *nodo = new Nodo<T>(valor);
    Nodo<T> *ultimo;

    // incrementamos el tamaño de la lista
    tamanio++;

    if (cabeza == nullptr) {
        this->cabeza = nodo;
        return;
    }

    // obtenemos la cola
    ultimo = ultimo_nodo();
    
    // definir el nodo siguiente de la cola, ahora
    // el nuevo nodo sera la cola
    ultimo->set_siguiente(nodo);

    // definimos el nodo anterior del nuevo nodo insertado
    nodo->set_anterior(ultimo);
}

template <typename T>
void ListaDobleEnlazada<T>::insertar_inicio(T valor) {
    // si la cabeza es nula, entonces insertamos el nuevo elemento solamente
    if (cabeza == nullptr) {
        return insertar(valor);
    }

    Nodo<T> *nodo = new Nodo<T>(valor);
    Nodo<T> *temporal = cabeza;

    cabeza = nodo;
    cabeza->set_siguiente(temporal);
    temporal->set_anterior(cabeza);
    tamanio++;
}

template <typename T>
void ListaDobleEnlazada<T>::insertar_en(int indice, T valor) {
    if (indice < 0 || indice > tamanio) {
        throw std::invalid_argument("indice fuera de los limites de la lista");
    }

    if (indice == 0 || tamanio == 0) {
        return insertar_inicio(valor);
    } else if (indice == tamanio) {
        return insertar(valor);
    }

    Nodo<T> *actual = obtener_nodo(indice);
    Nodo<T> *anterior = actual->get_anterior();
    Nodo<T> *siguiente = actual->get_siguiente();

    Nodo<T> *nodo = new Nodo<T>(valor);

    anterior->set_siguiente(nodo);
    nodo->set_siguiente(actual);
    nodo->set_anterior(anterior);
    actual->set_anterior(nodo);

    tamanio++;
}

template <typename T>
void ListaDobleEnlazada<T>::eliminar(int indice) {
    if (indice < 0 || indice >= tamanio) {
        throw std::invalid_argument("index out of bounds");
    }
    
    if (indice == 0) {
        Nodo<T> *temporal = cabeza;
        cabeza = cabeza->get_siguiente();
        cabeza->set_anterior(nullptr);
        delete temporal;
    } else if (indice == tamanio - 1) {
        Nodo<T> *nodo = ultimo_nodo();
        Nodo<T> *anterior = nodo->get_anterior();
        
        anterior->set_siguiente(nullptr);
        delete nodo;
    } else {
        Nodo<T> *actual = obtener_nodo(indice);
        Nodo<T> *anterior = actual->get_anterior();
        Nodo<T> *siguiente = actual->get_siguiente();
        
        anterior->set_siguiente(siguiente);
        siguiente->set_anterior(anterior);
        delete actual;
    }

    tamanio--;
}

template <typename T>
void ListaDobleEnlazada<T>::recorrer(std::function<void(T, int)> callback) {
    Nodo<T> *temporal = cabeza;
    int indice = 0;

    while (temporal != nullptr) {
        callback(temporal->get_valor(), indice++);
        temporal = temporal->get_siguiente();
    }
}

template <typename T>
Nodo<T> *ListaDobleEnlazada<T>::ultimo_nodo() {
    Nodo<T> *temporal = cabeza;

    if (temporal == nullptr) {
        return nullptr;
    }

    while (temporal->get_siguiente() != nullptr) {
        temporal = temporal->get_siguiente();
    }

    return temporal;
}

template <typename T>
Nodo<T> *ListaDobleEnlazada<T>::obtener_nodo(int indice) {
    if (indice < 0 || indice >= tamanio) {
        throw std::invalid_argument("indice fuera de los limites de la lista");
    }

    if (indice == 0) {
        return cabeza;
    }

    int indice_actual = 0;
    Nodo<T> *ultimo = cabeza;

    while (ultimo->get_siguiente() != nullptr) {
        if (indice_actual == indice) {
            break;
        }

        indice_actual++;
        ultimo = ultimo->get_siguiente();
    }

    return ultimo;
}