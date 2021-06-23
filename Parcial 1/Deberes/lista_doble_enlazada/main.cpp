#include <iostream>
#include "lista_doble_enlazada.h"

using namespace std;

int main(int argc, char **argv) {
    ListaDobleEnlazada lista;
    lista.insertar(4);
    lista.insertar(5);
    lista.insertar(6);
    lista.insertar_inicio(3);
    lista.insertar_inicio(2);
    lista.insertar_en(0, 1);
    lista.eliminar(4);

    int suma = 0;

    lista.recorrer([&suma](int valor, int indice) {
        suma += valor;
    });

    lista.recorrer([](int valor, int indice) {
        std::cout 
            << "indice: " << indice << " "
            << "valor: " << valor << std::endl;
    });

    std::cout << "suma = " << suma << std::endl;
}
