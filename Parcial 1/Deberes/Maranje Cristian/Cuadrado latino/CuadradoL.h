#include <iostream>
#include <stdlib.h>

void cuadradoLatino (){
    int n,**matriz;
    std::cout<<"Ingrese el tamño del cuadrado: "; std::cin>>n;
    matriz = new int*[n];
    for(int i = 0;i<n;i++){
        matriz[i] = new int[n];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0)
                matriz[i][j]=j+1;
            else if(matriz[i-1][j]==1)
                matriz[i][j]=n;
            else
                matriz[i][j]=matriz[i-1][j]-1;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}