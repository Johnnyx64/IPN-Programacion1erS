#include <stdio.h>
#include <stdlib.h>

void PeticionDeNumero()
{

int x;

printf("Escribe el numero: ");

scanf("%d",&x);


if ( x < 10 )
{
printf("el numero es menor a 10");
}
else

if  ( x == 10 )
{

printf("El numero es 10");
}
else

if  ( x > 10 && x < 20)
{

printf("el numero es mayor a 10 pero menor a 20");
}
else

if  ( x == 20 )
{

printf("El numero es 20");
}
else

if  ( x >= 20 )
{

printf("El numero es mayor a 20");
}

}


int main()
{
PeticionDeNumero();
getch();
return 0;
}