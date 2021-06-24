#include <iostream>
#include "Fecha.h"
#include "Persona.h"
#include <time.h>

using namespace std;
Fecha::Fecha(){
	this->year = 0;
	this->month = 0;
	this->day = 0;
}

Fecha::Fecha(int day,int month,int year){
	this->year=year;
	this->month=month;
	this->day=day;
}

Fecha* Fecha::ingresarFechaNacimiento(){
	int year2, month2, day2;//fecha nacimiento
	
	//ingreso y validacion del anio
	cout << "Ingresar Anio de nacimiento (xxxx): " << endl;
	cin >> year2;
	while( year2 < 1900 || year2 > 2021 ){
		cout << "Dato no valido, volver a ingresar: " << endl;
		fflush(stdin);
		cin >> year2;
	}

	//ingreso y validacion del mes
	cout << "Ingresar Mes de nacimiento (xx): " << endl;
	cin >> month2;
	while( month2 < 1 || month2 > 12 ){
		cout << "Dato no valido, volver a ingresar: " << endl;
		fflush(stdin);
		cin >> month2;
	}

	//ingreso y validacion del dia
	cout << "Ingresar Dia de nacimiento (xx): " << endl;
	cin >> day2;
	while( day2 < 1 || day2 > 30 ){
		cout << "Dato no valido, volver a ingresar: " << endl;
		fflush(stdin);
		cin >> day2;
	}
	Fecha *tmp = new Fecha(day2,month2,year2);
	return tmp;
}

int Fecha::_edad(){
	
	//tiempo actual automatico aun falta de implementar
	char currDate [30];
	time_t t = time(NULL);
	struct tm tm= *localtime(&t);

	int respDia , respMes;
	int year2= year, month2= month, day2=day;//fecha nacimiento
	int year1=tm.tm_year+1900,month1=tm.tm_mon+1,day1=tm.tm_mday;//fecha actual
	
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
    return yearT;
}

//---------------setters--------------
void Fecha::setYear(int _year){
	year=_year;
}
void Fecha::setDay(int _day){
	day=_day;
}
void Fecha::setMonth(int _month){
	month=_month;
}

//----------------getters-------------
int Fecha::getDay(){
	return day;
}
int Fecha::getMonth(){
	return month;
}
int Fecha::getYear(){
	return year;
}
