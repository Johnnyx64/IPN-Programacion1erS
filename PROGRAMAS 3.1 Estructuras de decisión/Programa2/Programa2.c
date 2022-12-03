#include <stdio.h>
#include <stdlib.h>

void PeticionEdad()
{

int x;

printf("Escribe la edad: ");

scanf("%d",&x);


if ( x >= 21 )
{
printf("Eres Mayor de edad");
}
else

if  ( x < 21 )
{

printf("NO eres mayor de edad");
}


}

int main()
{
PeticionEdad();
getch();
return 0;
}