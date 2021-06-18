#include <iostream>

using namespace std;

/*Universidad de las Fuerzas Armadas ESPE
Tpitulo: Clases en C++
Autor/es:Cristian Maranje
Fecha de creacion: 24/05/2021
Fecha de modificacion:26/05/2021
Ingenieria de Software
Estructura de Datos*/


int mayor(int num1, int num2);

int menor(int num1, int num2);

class Mayor_menor{
	private:
		int num;
		
	public:
		Mayor_menor(int a){
			num = a;
			
		}
		Mayor_menor(){
			num = 0;
			
		}
		int get(){
			return num;
		}
		
};


int operator + (Mayor_menor num1, Mayor_menor num2){
	if (num1.get()>num2.get()){
		return num1.get();
	}else{
		return num2.get();
	}
}


int operator - (Mayor_menor num1, Mayor_menor num2){
	if (num1.get()<num2.get()){
		return num1.get();
	}else{
		return num2.get();
	}
}


int main(){
	
	int num1,num2;
	cout<<"Isente el primer numero: "; cin>>num1;
	Mayor_menor M1(num1);
	cout<<"Isente el segundo numero: "; cin>>num2;
	Mayor_menor M2(num2);
	
	Mayor_menor mayor();
	cout<<"El numero mayor es: "<< M1+M2 <<endl;
	
	return 0;
}





