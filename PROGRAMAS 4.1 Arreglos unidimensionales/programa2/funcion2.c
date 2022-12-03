#include <stdio.h>
#include <stdlib.h>
#include <time.h>




int i;
char minumero[100]; //mi array vacio
int pointer=0,valor,random; //mi puntero y el valor de la casilla del array


void datafalsa()
{

printf("\n para proceder con el programa es necesario tener calificaciones para los alumnos,\n por lo cual rellenare los datos de los N alumnos con calificaciones falsas\n y se procedera con dichos alumnos");
    
    for(i=1; i<=99; i++){
         
        random = rand() % 10;
        minumero[pointer] = random; //llenamos con datos aleatorios (falsos para tomarlos despues)
        pointer++;
    }
printf(" \n las calificaciones de los 100 alumnos quedaron asi: \n ");
pointer=0;
for(i=1; i<=99; i++){
        valor=minumero[pointer];
        pointer++;
        printf("[%d],", valor);
    }
}

void promediocali(){
printf("\n\n\n");
{


pointer=0;
int c = 1;
float suma = 0,promedio = 0;

    for(i=1; i<=99; i++){

if (c != 99){
    valor=minumero[pointer];
        pointer++;
        suma = suma + valor;
        c++;     
        }
        else{
            break;
        }
    }
promedio = suma / c;
    printf("El promedio de las calificaciones de los 100 alumnos es: %1f", promedio);

}

}


int main(){
    char seguir;
    do
    {
 datafalsa();
 promediocali();
   
   
   printf( "\n Hacer de nuevo (s/n)?: ");
        fflush( stdin );
        scanf( "%c", &seguir ); 
    }

while ( seguir != 'n' );
 getch();
 return 0;       
}
