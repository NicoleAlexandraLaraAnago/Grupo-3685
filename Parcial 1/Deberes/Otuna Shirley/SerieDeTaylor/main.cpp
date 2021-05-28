/*Universidad de las Fuerzas Armadas ESPE
Tpitulo: Clases en C++
Autor/es: Shirley Otuna
Fecha de creacion: 26/05/2021
Fecha de modificacion: 27/05/2021
Ingenieria de Software
Estructura de Datos*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "Taylor.h"

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n, x;
	cout << "Valor de n "; cin >> n;
	cout << "Valor de x "; cin >> x;
	printf("El valor de Taylor para n = %d, x = %d es = %f\n", n, x, taylor(n, x));
	system("pause");
}
