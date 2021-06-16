#include <iostream>



/*Universidad de las Fuerzas Armadas ESPE
Tpitulo: Programa para calcular las fechas de las mensualidades
Autor/es:Cristian Maranje
Fecha de creacion: 01/06/2021
Fecha de modificacion:03/06/2021
Ingenieria de Software
Estructura de Datos*/

using namespace std;

class Fecha{
  private:
    int dia;
    int mes;
    int anio;
    int periodo;
  public:
    Fecha(int _dia,int _mes,int _anio,int _periodo);
    int getDia() const {return dia;}
    int getMes() const {return mes;}
    int getAnio() const {return anio;}
    int getPeriodo() const {return periodo;}
};

Fecha::Fecha(int _dia,int _mes,int _anio,int _periodo){
  this->anio = _anio;
  this->dia = _dia;
  this->mes = _mes;
  this->periodo= _periodo;
}


bool validarLosDias (int dia, int mes);
void diaDePago (Fecha fecha);
bool validarDiaLaborable(int anio,int mes,int dia);

int main (){
    int dia,mes,anio,periodo;
    bool valido=false;
    cout<<"Ingrese el dia : ";cin>>dia;
    cout<<"Ingrese el mes : ";cin>>mes;
    cout<<"ingrese el año : ";cin>>anio;
    cout<<"Ingrese el numero de meses : ";cin>>periodo;
    
    Fecha fecha(dia,mes,anio,periodo);
    diaDePago (fecha);

    
    return 0;
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

void diaDePago (Fecha fecha){
  int cont = 0;
  int mes = fecha.getMes();
  int periodo = fecha.getPeriodo();
  int dia = fecha.getDia();
  int anio = fecha.getAnio();

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
    std::cout<<" año "<<anio<<" mes "<<mes<<" dia "<<dia<<" dia laborable "<<validacionDiaLaborable<<std::endl;
  }
}
