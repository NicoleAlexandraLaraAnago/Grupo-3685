void Calculo::calcularCifras(int ingreso){
    if ( dividendo > 0 && divisor > 0 )
    {
        cociente = 0;
        resto = dividendo;

        while ( resto >= divisor )
        {
            resto -= divisor;
            cociente++;
        }

        printf( "\n   %d div %d = %d ( Resto = %d )", dividendo, divisor, cociente, resto );
    }
    else
        printf( "\n   ERROR: Ambos n%cmeros deben ser mayores que cero.", 163 );

    getch(); /* Pausa */

    return 0;
}
   
   
   

