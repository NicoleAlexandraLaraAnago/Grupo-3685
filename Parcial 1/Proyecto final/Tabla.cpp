#include "Persona.h"
#include "Archivo.h"
#include <iostream>
#include <math.h>
using namespace std;
Tabla::Tabla(Fecha *_fecha,float _total,int _pagos,int _numCuotas,float _porcentajeInteres){
    this->fechaPago =_fecha;
    this->total=_total;
    this->cuotas=_pagos;
    this->plazo=_numCuotas;
    this->porcentajeInteres = _porcentajeInteres;
}

Tabla::Tabla(){
  total=0;
  cuotas=0;
  plazo=0;
  porcentajeInteres=0;
}

Tabla* Tabla::generarTabla(){
  float _total,_porcentajeInteres,_pagos;
  int _plazo;
  Fecha *_fechaPago = new Fecha();
  cout<<"Tabla.\n";
  cout<<"Ingrese el valor del Total: "; cin>>_total;
  cout<<"Ingrese el porcentaje de interes: "; cin>>_porcentajeInteres;
  cout<<"Ingrese el numero de cuotas: "; cin>>_plazo;
  cout<<"Ingrese la fecha de la primera cuota.\n";
  _fechaPago = fechaPago->ingresarFecha();
  _pagos = _total/_plazo;
  Tabla *temp = new Tabla(_fechaPago,_total,_pagos,_plazo,_porcentajeInteres);
  return temp;
}
bool validarLosDias (int dia, int mes);
void diaDePago (Fecha *fecha,int periodo);
bool validarDiaLaborable(int anio,int mes,int dia);

float Tabla::calcularPagos(){
  float pagos,interes = getPorcentajeInteres(),_plazo = getNumCuotas(),_total = getTotal(),tmp;
  interes=interes/100;
  tmp=pow((1+interes),_plazo);
  tmp=interes/--tmp;
  pagos=_total*tmp;
  return pagos;
}

float Tabla::calcularInteres(float saldo){
  float interes = getPorcentajeInteres(),_total = saldo,resultado;
  interes=interes/100;
  resultado=_total*interes;
  return resultado;
}

//imprimir tabla
void Tabla::imprimirTabla(){
    cout<<"Vencimiento\t\tPago\t\tInteres\t\tAmortizacion\t\tSaldo\n";
    int cont=0;
    float amortizacion=0,saldo= getTotal(),pagos=0,interes=0;
    while (cont<=plazo)
    {
      diaDePago(getFechaPago(),cont);
      cout<<"\t\t"<<pagos<<"\t\t"<<interes<<"\t\t"<<amortizacion<<"\t\t"<<saldo<<endl;
      pagos=calcularPagos();
      interes = calcularInteres(saldo);
      amortizacion=pagos-interes;
      saldo=saldo-amortizacion;
      cont++;
    }
    
}

//para guardar la tabla
void Tabla::guardarTabla(){
  ofstream archivo;
  archivo<<"Vencimiento\t\tPago\t\tInteres\t\tAmortizacion\t\tSaldo\n";
  int cont=0;
  float amortizacion=0,saldo= getTotal(),pagos=0,interes=0;
  while (cont<=plazo)
  {
    diaDePago(getFechaPago(),cont);
    archivo<<"\t\t"<<pagos<<"\t\t"<<interes<<"\t\t"<<amortizacion<<"\t\t"<<saldo<<endl;
    pagos=calcularPagos();
    interes = calcularInteres(saldo);
    amortizacion=pagos-interes;
    saldo=saldo-amortizacion;
    cont++;
  }
    
}

bool Tabla::validarLosDias (int dia, int mes){
    if(dia<=0){
        return false;
    }
    else if((mes==4)||(mes==6)||(mes==9)||(mes==11)){
        if(dia>30){
            return false;
        }else{
            return true;
        }
    }
    else if((mes==1)||(mes==3)||(mes==5)||(mes==7)||(mes==8)||(mes==10)||(mes==12)){
        if(dia>31){
            return false;
      }else{
            return true;
      }
    }
    else if((mes==2)){
        if(dia>28){
            return false;
      }else{
            return true;
        }
    }
  return false;
}

//metodo de sakamoto
int Tabla::diaSemana(int anio,int  mes,int dia){
  static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
  if(mes < 3 ){
    anio -= 1;
  }
  return (anio + anio/4 - anio/100 + anio/400 + t[mes-1] + dia) % 7;
}

bool Tabla::validarDiaLaborable(int anio,int mes,int dia){
  int diaSemana;
  static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
  if(mes < 3 ){
    anio -= 1;
  }
  diaSemana = (anio + anio/4 - anio/100 + anio/400 + t[mes-1] + dia) % 7;
  if ((diaSemana>=1)&&(diaSemana<=5)){
    return true;
  }else if(diaSemana == 0){
    return false;
  }else if (diaSemana == 6){
    return false;
  }
  return false;
}

void Tabla::diaDePago (Fecha *fecha,int periodo){
  int cont = 0;
  int mes = fecha->getMonth();
  int dia = fecha->getDay();
  int anio = fecha->getYear();

  while(cont <periodo){
    bool validacionDias = false,validacionDiaLaborable = false;
    mes++;
    cont++;
    if(mes > 12){
      mes = 1;
      anio++;
    }
    while (validacionDias == false){
      validacionDias = validarLosDias(dia,mes);
      if(validacionDias == false){
        dia--;
      }
    }
    while(validacionDiaLaborable == false){
      validacionDiaLaborable = validarDiaLaborable(anio,mes,dia);
      if(validacionDiaLaborable == false){
        dia++;
      }
      if((mes==4)||(mes==6)||(mes==9)||(mes==11))
          if(dia>30){
            do{
              dia--;
              validacionDiaLaborable = validarDiaLaborable(anio,mes,dia);
            }while(validacionDiaLaborable == false);
          }
        if((mes==1)||(mes==3)||(mes==5)||(mes==7)||(mes==8)||(mes==10)||(mes==12))
          if(dia>31){
            do{
              dia--;
              validacionDiaLaborable = validarDiaLaborable(anio,mes,dia);
            }while(validacionDiaLaborable == false);
          }
        if((mes==2))
          if(dia>28){
            do{
              dia--;
              validacionDiaLaborable = validarDiaLaborable(anio,mes,dia);
            }while(validacionDiaLaborable == false);
          }
    }
  }
  cout<<dia<<"/"<<mes<<"/"<<anio;
}

string Tabla::guardarDiaDePago (Fecha *fecha,int periodo){
  int cont = 0;
  int mes = fecha->getMonth();
  int dia = fecha->getDay();
  int anio = fecha->getYear();

  while(cont <periodo){
    bool validacionDias = false,validacionDiaLaborable = false;
    mes++;
    cont++;
    if(mes > 12){
      mes = 1;
      anio++;
    }
    while (validacionDias == false){
      validacionDias = validarLosDias(dia,mes);
      if(validacionDias == false){
        dia--;
      }
    }
    while(validacionDiaLaborable == false){
      validacionDiaLaborable = validarDiaLaborable(anio,mes,dia);
      if(validacionDiaLaborable == false){
        dia++;
      }
      if((mes==4)||(mes==6)||(mes==9)||(mes==11))
          if(dia>30){
            do{
              dia--;
              validacionDiaLaborable = validarDiaLaborable(anio,mes,dia);
            }while(validacionDiaLaborable == false);
          }
        if((mes==1)||(mes==3)||(mes==5)||(mes==7)||(mes==8)||(mes==10)||(mes==12))
          if(dia>31){
            do{
              dia--;
              validacionDiaLaborable = validarDiaLaborable(anio,mes,dia);
            }while(validacionDiaLaborable == false);
          }
        if((mes==2))
          if(dia>28){
            do{
              dia--;
              validacionDiaLaborable = validarDiaLaborable(anio,mes,dia);
            }while(validacionDiaLaborable == false);
          }
    }
  }
  string tmp;
  tmp=to_string(dia)+"/"+to_string(mes)+"/"+to_string(anio);
  return tmp;
}

//--------------------setters------------------
void Tabla::setFechaPago(Fecha *_fecha){
    fechaPago =_fecha;
}
void Tabla::setTotal(float _total){
    total=_total;
}
void Tabla::setNumCuotas(int _cuotas){
    plazo=_cuotas;
}
void Tabla::setCuotas(int _pagos){
    cuotas=_pagos;
}
void Tabla::setPorcentajeInteres(float _restante){
    porcentajeInteres=_restante;
}


//---------------getters--------------

Fecha* Tabla::getFechaPago(){
    return fechaPago;
}
float Tabla::getTotal(){
    return total;
}
int Tabla::getNumCuotas(){
    return plazo;
}
float Tabla::getPorcentajeInteres(){
    return porcentajeInteres;
}
int Tabla::getCuotas(){
    return cuotas;
}
