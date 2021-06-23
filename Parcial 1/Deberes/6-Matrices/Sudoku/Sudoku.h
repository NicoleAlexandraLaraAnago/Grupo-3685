/***********************************************************************
 * Module:  Sudoku.h
 * Author:  Patricio
 * Modified: martes, 08 de junio de 2021 22:53:32
 * Purpose: Declaration of the class Sudoku
 ***********************************************************************/

#if !defined(__Sudoku_Sudoku_h)
#define __Sudoku_Sudoku_h

class Sudoku
{
public:
   Sudoku();
   ~Sudoku();
   bool jugar(int fila, int columna, int dato);
   int obtenerResto(void);
   void imprimir(void);

protected:
private:
   int resto;
   int **matriz;


};

#endif
