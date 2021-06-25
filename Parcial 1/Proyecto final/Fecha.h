#include <iostream>
#pragma once
using namespace std;

class Fecha{
	public: 
		Fecha();
		Fecha(int day,int month,int year);
		Fecha* ingresarFecha();
		int _edad();
		void setYear(int);
		void setMonth(int);
		void setDay(int);
		int getYear();
		int getMonth();
		int getDay();
		friend class Persona;
	
	private:
		int year;
		int month;
		int day;
};

