#include <stdio.h>
#include <stdlib.h>

int Tabla()
{
    char seguir;
    int i, numero;

    do
    {
        printf( "\n   Introduzca un numero entero del 1 al 10: ");
        scanf( "%d", &numero );

        printf( "\n   La tabla de multiplicar del %d es:\n", numero );


        for ( i = 1 ; i <= 10 ; i++ )
            printf( "\n   %d * %d = %d", i, numero, i * numero );


        printf( "\n   Desea ver otra tabla (s/n)?: ");
        fflush( stdin );
        scanf( "%c", &seguir );

    } while ( seguir != 'n' );

}

int main()
{
Tabla();
getch();
return 0;
}