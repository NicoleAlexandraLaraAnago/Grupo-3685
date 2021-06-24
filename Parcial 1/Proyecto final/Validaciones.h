#include <stdio.h>
#include <string.h>
#define dim 10
#pragma once
using namespace std;

long int validarCedula(long int cedula){
    int A[dim],i=9,sumapar=0,sumaimp=0,sumatot,mult=0,digito;
    long int coc=0,tmpCedula=0;
    do
    {
        i=9;
        sumapar=0;
        sumaimp=0;
        mult=0;
        digito=0;
        tmpCedula=cedula;
        do
        {
            coc=cedula/10;
            A[i]=cedula%10;
            i--;
            cedula=coc;
        }while (coc!=0);

        for(i=0;i<dim-1;i+=2){
            mult=A[i]*2;
            if (mult>9){
                mult-=9;
            }
            sumapar+=mult;
        }
        for (i=1;i<dim-2;i+=2){
            sumaimp+=A[i];
        }
        sumatot=sumapar+sumaimp;
        digito=10-(sumatot%10);
        if (digito==10){
            digito=0;
        }if (digito==A[9]){
            printf("Cedula valida.\n");
        }else{
            printf("\nCedula invalida\nIngrese nuevamente: ");
            fflush(stdin);
            scanf("%ld",&cedula);
            fflush(stdin);
        }

    }while (digito!=A[9]);
    return tmpCedula;
}
    
long int validarNumero(string mensaje){
    long int dato;
	do{
		cout<<endl<<mensaje;
		cin>>dato;
		
		if(cin.fail()==true){
			cin.clear();
			cin.ignore(1000,'\n');
			cout<<endl<<"Tipo de dato incorrecto..."<<endl;
			system("pause");
			continue;
		} else{
			break;
		}
	}while(true);
	return dato;
}
