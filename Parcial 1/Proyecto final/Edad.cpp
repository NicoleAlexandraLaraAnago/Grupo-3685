#include <iostream>
#include "Fecha.h"


using namespace std;


void Fecha::_edad(){
	
	int respDia , respMes;
	int year2, month2, day2;
	int year1, month1, day1;
	
	cout << "Ingresar Anio de nacimiento (xxxx): " << endl;
	cin >> year2;
	while( year2 < 0 || year2 > 2021 ){
		cout << "Dato no valido, volver a ingresar: " << endl;
		cin >> year2;
	}
	cout << "Ingresar Mes de nacimiento (xx): " << endl;
	cin >> month2;
	while( month2 < 1 || month2 > 12 ){
		cout << "Dato no valido, volver a ingresar: " << endl;
		cin >> month2;
	}
	cout << "Ingresar Dia de nacimiento (xx): " << endl;
	cin >> day2;
	while( day2 < 1 || day2 > 30 ){
		cout << "Dato no valido, volver a ingresar: " << endl;
		cin >> day2;
	}
	
	cout << "Ingresar Anio actual (xxxx): " << endl;
	cin >> year1;
	while( year1 < 0 || year1 > 2021 ){
		cout << "Dato no valido, volver a ingresar: " << endl;
		cin >> year1;
	}
	
	cout << "Ingresar Mes actual (xx): " << endl;
	cin >> month1;
	while( month1 < 0 || month1 > 12 ){
		cout << "Dato no valido, volver a ingresar: " << endl;
		cin >> month1;
	}
		
	cout << "Ingresar Dia actual (xx): " << endl;
	cin >> day1;
	while( day1 < 0 || day1 > 30 ){
		cout << "Dato no valido, volver a ingresar: " << endl;
		cin >> day1;
	}
		
 
    if ( day1 < day2  )
    {   
        day1 = day1 + 30;
        month1 = month1 - 1;
        respDia =  day1 - day2;
    }
    else
        respDia =  day1 - day2;
 
    if( month1 < month2 )
    {
        month1 = month1 + 12;
        year1 = year1 - 1 ;
        respMes = month1 - month2;
    }
    else
        respMes = month1 - month2; 
 
	int yearT;
	yearT = year1 - year2;
	
	cout << endl << "--------DATOS-------" << endl;
    cout << " Anio/s: " <<yearT << endl; 
    cout << " Mese/s: " << respMes << endl;
    cout << " Dia/s: " << respDia << endl;
    
    
		
}


