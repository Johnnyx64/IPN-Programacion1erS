#include <stdio.h>
#include <stdlib.h>



void ciclofor()
{
    int val;
    
    int x;
    printf("Ingresa Un Numero Entero\n ");
    scanf("%d",&x);

for(val=1;val<=x;val++)
{
    printf("Numero de ejecuciones: %d \n",val);

} 

}
int main()
{
ciclofor();
getch();
return 0;
}