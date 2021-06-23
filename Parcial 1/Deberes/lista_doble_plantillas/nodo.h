#pragma once

template <typename T>
class Nodo {
public:
    Nodo(T valor);

    Nodo *get_siguiente();
    void set_siguiente(Nodo *nodo);
    
    Nodo *get_anterior();
    void set_anterior(Nodo *nodo);

    T get_valor();
    void set_valor(T _valor);

private:
    T valor;
    Nodo<T> *siguiente = nullptr;
    Nodo<T> *anterior = nullptr;
};

///////////////////////////////////////////////////////////////////////////////////////////////////

template <typename T>
Nodo<T>::Nodo(T _valor) {
    this->valor = _valor;
}

template <typename T>
Nodo<T> *Nodo<T>::get_anterior() {
    return anterior;
}

template <typename T>
void Nodo<T>::set_anterior(Nodo *nodo) {
    this->anterior = nodo;
}

template <typename T>
Nodo<T> *Nodo<T>::get_siguiente() {
    return siguiente;
}

template <typename T>
void Nodo<T>::set_siguiente(Nodo *nodo) {
    this->siguiente = nodo;
}

template <typename T>
T Nodo<T>::get_valor() {
    return valor;
}

template <typename T>
void Nodo<T>::set_valor(T _valor) {
    this->valor = valor;
}
