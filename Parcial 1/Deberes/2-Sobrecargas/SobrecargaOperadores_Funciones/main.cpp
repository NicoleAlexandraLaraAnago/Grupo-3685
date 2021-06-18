/*Universidad de las Fuerzas Armadas ESPE
Título: Lista Simple Circular
#Grupo
Autor/es: Kevin Condor, Nicole Lara, Cristian Maranje, Stalin Rivera, Shirley Otuna
Fecha de creacíon: 24/05/2021
Fecha de modificación: 26/05/2021
Ingeniería en Software
Estructura de Datos*/

#include <iostream>
#include "pareja.h"

int main(){
	
    Pareja A(2, 2);
    Pareja B(3, 3);
    Pareja C;

    cout << "A = " << A << "\n";
    cout << "B = " << B << "\n";
    cout << "........................." << endl;
    C = A + B;
    cout << "A = " << A << "\n";
    cout << "C = " << C << endl;
    cout << "........................." << endl;
    cin>>A;
    cin>>B;
    C = A * B;
    cout << "A = " << A << "\n";
    cout << "C = " << C << endl;
    cout << "........................." << endl;
    //++C;
    cout << "C = " << C << endl;
    cout << "A == B " << ( (A==B) ? "Si": "No" );
    cin.get();
    return 0;
}
