#pragma once
#include <iostream>

class Matriz{
    private:
        int **matriz1;
        int **matriz2;
        int **matrizR;
        int dim;
    public:
    	Matriz();
    	Matriz(int **, int**, int**, int);
        int getDim();
		void setDim(int);
        void setMatriz1(int **);
        int** getMatriz1();
    	void setMatriz2(int **);
	    int** getMatriz2();
	    void setMatrizR(int **);
	    int** getMatrizR();
};
