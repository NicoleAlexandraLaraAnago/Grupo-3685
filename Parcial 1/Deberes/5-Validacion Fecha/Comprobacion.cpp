static bool anioBisiesto(int anio){

    if(anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0){
        return true;
    }else{
        return false;
    }
   
}

static int verificarDiaDelMes(int mes,int anio){
    int dia = 31;
    if(mes == 4 ||mes == 6 ||mes == 9 || mes == 11){
        dia = 30;
    }else if (mes == 2){
        if(anioBisiesto(anio)){
            dia = 29;
        }else{
            dia = 28;
        }
    }

    return dia;
}

static bool validarFecha(int dia, int mes, int anio){
    bool aux;
    
    if(anio>=1900 && anio<=2100){
        if(anioBisiesto(anio)){
            if(mes>=1 && mes<=12){
                if(mes==4 || mes==6 || mes==9 || mes==11){
                    if(dia>=1 && dia<=30){
                        aux = true;
                    }else{
                        aux = false;
                    }
                }else if(mes == 2){
                    if(dia>=1 && dia<=29){
                        aux = true;
                    }else{
                        aux = false;
                    }
                }else{
                    if(dia>=1 && dia<=31){
                        aux = true;
                    }else{
                        aux = false;
                    }
                }
            }else{
                aux = false;
            }
        }
        else{
            if(mes>=1 && mes<=12){
                if(mes==4 || mes==6 || mes==9 || mes==11){
                    if(dia>=1 && dia<=30){
                        aux = true;
                    }else{
                        aux = false;
                    }

                }else if(mes == 2){
                    if(dia>=1 && dia<=28){
                        aux = true;
                    }else{
                        aux = false;
                    }
                }else{
                    if(dia>=1 && dia<=31){
                        aux = true;
                    }else{
                        aux = false;
                    }
                }
            }else{
                aux = false;
            }
        }
    }else{
        aux = false;
    }
    return aux;
}


static int diaSem(int dia,int mes,int anio){
    int a = (14-mes)/12;
	int y = anio - a;
	int m = mes +12 * a-2;
	int d = (dia + y + y/4 - y/100 + y/400 + (31*m)/12)%7;
    return d;
}

static bool validarNumero(int numero){
    if(numero > 0){
        return true;
    }
    else{
        return false;
    }

}
