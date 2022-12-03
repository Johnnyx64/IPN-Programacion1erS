#include <stdio.h>
#include <stdlib.h>
//#include<conio.h>

void Factorial ()
{
    char seguir;
  do{  
    
    unsigned long long num=0;
    unsigned long long fac;
    unsigned long long r=1;

    printf("\nIngresa un numero inferior a 32 para calcular su factorial:");
    scanf("%d",&num);
    printf("\nDesarrollo: ");
    fac=num;
    do
    {
        (fac==1)?printf("%d",fac):printf("%d x ",fac);
        r=r*fac;
        fac=fac-1;
    } while(fac>0);
    
    printf("\nEl resultado de factorial de %d es: %d",num,r);
    
    printf( "\n   Desea Introducir un nuevo numero (s/n)?: ");
        fflush( stdin );
        scanf( "%c", &seguir );

    } while ( seguir != 'n' );
}
int main()
{
Factorial();
getch();
return 0;
}