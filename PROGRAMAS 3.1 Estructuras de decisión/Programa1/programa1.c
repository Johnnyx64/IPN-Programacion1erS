#include <stdio.h>
#include <stdlib.h>

void PeticionNumeros()
{

int x, y, z;

printf("Escribe el primer numero: ");

scanf("%d",&x);

printf("Escribe el segundo numero: ");

scanf("%d",&y);

printf("Escribe el tercer numero: ");

scanf("%d",&z);

if ( x+y == z )
{
printf("la suma de los dos primeros numeros es igual al tercero: %d",z);
}
else

if  ( y+x != z )
{

printf("la suma de los dos primeros numeros NO es igual al tercero: %d", z);
}

}

int main()
{
PeticionNumeros();
getch();
return 0;
}