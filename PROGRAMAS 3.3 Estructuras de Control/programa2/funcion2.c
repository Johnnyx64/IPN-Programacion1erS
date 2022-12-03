/*Calcular el promedio de n números*/
#include<stdio.h>
int main()
{
    int c = 1;
    float n,suma = 0,promedio = 0;
    printf("\nEscribe 10 valores de los cuales deseas calcular su promedio\n");
    for (;;){
        printf("\nIngresa un numero\n");
        
        scanf("%f",&n);
        if (c != 10){
            suma = suma + n;
            c++;
            
        }
        else{
            break;
        }
    }
    promedio = suma / c;
    printf("El promedio de los numeros es: %.1f",promedio);
    getch();
    return 0;
}