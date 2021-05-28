/*Universidad de las Fuerzas Armadas "ESPE"
Titulo: Sobrecarga de Funciones
Autor/es: Stalin Rivera
Fecha de Creación: 26/05/2021
Fecha de Modificación: 26/05/2021
Inginiería de Software
Estructura de Datos*/
#include<iostream>
#include <conio.h>
#include <stdio.h>
#include "Division.h"
using namespace std;


int main()
{
    int cociente, dividendo, divisor, resto;
    cout<<"Ingrese un numero entero para el dividendo: ";
    cin>>dividendo;
	cout<<"Ingrese un numero entero para el divisor: ";
    cin>>divisor;    


    if ( dividendo > 0 && divisor > 0 )
    {
        cociente = 0;
        resto = dividendo;

        while ( resto >= divisor )
        {
            resto -= divisor;
            cociente++;
        }

        printf( "\n   %d div %d = %d ( Resto = %d )", dividendo, divisor, cociente, resto );
    }
    else
        printf( "\n   ERROR: Ambos n%cmeros deben ser mayores que cero.", 163 );

    getch(); /* Pausa */

    return 0;
}














