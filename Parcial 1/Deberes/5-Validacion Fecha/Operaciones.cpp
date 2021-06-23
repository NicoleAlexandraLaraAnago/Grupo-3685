#include <iostream>
#include <ctime>
#include <string>
#include <string.h>
#include "Operaciones.h"
#include "Comprobacion.cpp"


using namespace std;

Operaciones::Operaciones(Fecha _fecha){
    this->fecha = _fecha;
}

string Operaciones::dSemana(int _dia){
	string a;
	if(_dia==1){
		a = "Lunes";
	}
	if(_dia==2){
		a = "Martes";
	}
	if(_dia==3){
		a = "Miercoles";
	}
	if(_dia==4){
		a = "Jueves";
	}
	if(_dia==5){
		a = "Viernes";
	}
	return a;
}

string Operaciones::mAnio(int _mes){
	string a;
	if(_mes==0){
		a = "Enero";
	}
	if(_mes==1){
		a = "Febrero";
	}
	if(_mes==2){
		a = "Marzo";
	}
	if(_mes==3){
		a = "Abril";
	}
	if(_mes==4){
		a = "Mayo";
	}
	if(_mes==5){
		a = "Junio";
	}
	if(_mes==6){
		a = "Julio";
	}
	if(_mes==7){
		a = "Agosto";
	}
	if(_mes==8){
		a = "Septiembre";
	}
	if(_mes==9){
		a = "Octubre";
	}
	if(_mes==10){
		a = "Noviembre";
	}
	if(_mes==11){
		a = "Diciembre";
	}
	return a;
}

void Operaciones::ingresarFecha(){
    int dia,mes,anio;
    cout<<"\n\n\n\n";
    cout<<"\t\t\tIngrese dia: ";
    cin>>dia;
    cout<<"\t\t\tIngrese mes: ";
    cin>>mes;
    cout<<"\t\t\tIngrese anio: ";
    cin>>anio;
    fecha.setDia(dia);
    fecha.setMes(mes);
    fecha.setAnio(anio);
}

bool Operaciones::comprobarFecha(){
    bool aux;
    if(validarFecha(fecha.getDia(),fecha.getMes(),fecha.getAnio())){
        int dia = diaSem(fecha.getDia(),fecha.getMes(),fecha.getAnio());
        if(dia == 0 || dia == 6){
            aux = false;
        }
        else{
            aux = true;
        }
    }else{
        aux = false;
    }
    return aux;
}


void Operaciones::generacionInformacion(){
    int numeroDia;
    numeroDia = diaSem(fecha.getDia(),fecha.getMes(),fecha.getAnio());
    for(int i=0;i<7;i++){
        if(i == numeroDia ){
			cout<<dSemana(numeroDia);
            cout<<" ";
			cout<<fecha.getDia();    
        }
    }
    for(int i=0;i<12;i++){
        if(i == (fecha.getMes()-1) ){
            cout<<" de ";
            cout<<mAnio(fecha.getMes()-1);
        }
    }
    cout<<" de ";
    cout<<fecha.getAnio()<<endl;
}
void Operaciones::generaFecha(int numeromes){
    int dia,mes,anio;
    dia = fecha.getDia();
    mes = fecha.getMes();
    anio = fecha.getAnio();
    for(int j=0;j<numeromes;j++){
        for(int i=0;i<31;i++){
            dia++;
            if(dia > verificarDiaDelMes(mes,anio)){
                dia = 1;
                mes++;
                if(mes > 12){
                    mes = 1;
                    anio++;
                }
            }
        }
        int a = diaSem(dia,mes,anio);
        if(a == 0){
            dia++;
        }if(a== 6){
            dia--;
        }
        fecha.setDia(dia);fecha.setMes(mes);fecha.setAnio(anio);
        generacionInformacion();
    }
}

int Operaciones::limiteDePago(){
    
    int numeroMes;
    do{
        cout<<"\nIngrese el numero de meses: ";
        cin>>numeroMes;
        if(validarNumero(numeroMes)==false){
            cout<<"Dato no valido";
        }
    }while(validarNumero(numeroMes)==false);
    return numeroMes;
}
