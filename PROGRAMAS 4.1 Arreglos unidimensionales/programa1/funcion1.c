#include <stdio.h>

int i;
char minumero[8]={4, 12, 1, 8, 2, 5, 11, 14}; //mi array
int pointer=0,valor; //mi puntero y el valor de la casilla del array

void numeros(){

    
    for(i=1; i<=8; i++){
        valor=minumero[pointer]; //checamos el puntero y en la posicion del array que este extraemos la info
        
        if(valor%2==0) //si es par pasa al print
        {
            printf(" \n los numeros pares son: %d ", valor);
            pointer++;
        }else{pointer++;} // si no es par no hace nada y se regresa al bucle

    }


        
}
int main(){
    numeros();
    getch();
    return 0;
 
}