/*Universidad de las Fuerzas Armadas ESPE
Tpitulo: Sobrecargas de funciones 
Autor/es: Nicole Lara
Fecha de creaci�n: 22/05/2021
Fecha de modificaci�n:23/05/2021
Ingenier�a de Software
Estructura de Datos*/

#include <iostream>

using namespace std;

int Calcular(int a, int b);
float Calcular(float, float);
float Calcular(int, float);
float Calcular(float, int);


int Calcular(int a, int b)
{
return a - b;
}
float Calcular(float a, float b)
{
return a - b;
}
float Calcular(int a, float b)
{
return a - b;
}
float Calcular(float a, int b)
{
return a - b;
}
