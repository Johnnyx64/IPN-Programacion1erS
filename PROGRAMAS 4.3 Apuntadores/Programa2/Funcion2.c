
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n1;
    int n2;
    int p1;
    int p2;
    int resultado;
    

    printf("\nintrodusca n1: ");
    scanf(" %d",&n1);
    printf("\nintrodusca n1: ");
    scanf(" %d",&n2);

    p1 = n1*n1;
    p2 = n2*n2;

    resultado = p1+p2;

    printf("\ntu resultado es: %d " ,resultado);
    
    getch();
    return 0;
}