cmake_minimum_required(VERSION 3.0.0)
project(ProyectoPrimerParcial VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(ProyectoPrimerParcial 
main.cpp 
Menu.h 
Persona.h 
Persona.cpp 
Validaciones.h 
Fecha.cpp 
Fecha.h 
Operaciones.h 
ListaDobleEnlazada.cpp 
ListaDobleEnlazada.h 
Nodo.cpp 
Nodo.h)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
