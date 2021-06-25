#include "Persona.h"
#include <iostream>
using namespace std;
Tabla::Tabla(Fecha *_fecha,float _total,int _cuotas,int _numCuotas,float _porcentajeInteres){
    this->fechaPago =_fecha;
    this->total=_total;
    this->cuotas=_cuotas;
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
  float _total,_porcentajeInteres,_cuotas;
  int _plazo;
  Fecha *_fechaPago = new Fecha();
  cout<<"Tabla.\n";
  cout<<"Ingrese el valor del Total: "; cin>>_total;
  cout<<"Ingrese el porcentaje de interes: "; cin>>_porcentajeInteres;
  cout<<"Ingrese el numero de cuotas: "; cin>>_plazo;
  cout<<"Ingrese la fecha de la primera cuota.\n";
  _fechaPago = fechaPago->ingresarFecha();
  _cuotas = _total/_plazo;
  Tabla *temp = new Tabla(_fechaPago,_total,_cuotas,_plazo,_porcentajeInteres);
  return temp;
}
bool validarLosDias (int dia, int mes);
void diaDePago (Fecha *fecha,int periodo);
bool validarDiaLaborable(int anio,int mes,int dia);

//imprimir tabla
void Tabla::imprimirTabla(){
    cout<<"Vencimiento\t\tAbonado\t\tInteres\t\tSaldo\n";
    int cont=0;
    float capital=0;
    float saldo= getTotal();
    while (cont<=plazo)
    {
      diaDePago(getFechaPago(),cont);
      cout<<"\t\t"<<capital<<"\t\t"<<getPorcentajeInteres()<<"%\t\t"<<saldo<<endl;
      capital=getTotal();
      saldo= getTotal();
      capital=capital/plazo*(cont+1);
      saldo=saldo-capital;
      cont++;
    }
    
}

bool validarLosDias (int dia, int mes){
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
int diaSemana(int anio,int  mes,int dia){
  static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
  if(mes < 3 ){
    anio -= 1;
  }
  return (anio + anio/4 - anio/100 + anio/400 + t[mes-1] + dia) % 7;
}

bool validarDiaLaborable(int anio,int mes,int dia){
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

void diaDePago (Fecha *fecha,int periodo){
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
void Tabla::setCuotas(int _cuotas){
    cuotas=_cuotas;
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
