#include<stdio.h>
#include <stdbool.h>
#include <conio.h>

void mimatrix()
{
char matrix[3][3];
bool yes = true;
printf("Ingrese valores para la matriz\n ");    

 for(int i = 0; i<3; i++){
    for(int j = 0; j < 3; j++ ){
        printf("Row  [%d , %d] : ", i,j);
        scanf(" %d",&matrix[i][j]);
}   
 }
     printf("Tu matriz es: \n\n");

 for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        printf(" %d ", matrix[i][j]);

        if(matrix[i][j] != matrix[j][i]){
        yes = false;
        i = 3;
        break;
        }
    }

    printf("\n");
}
if(yes==true)
    printf("La matrix SI es simetrica");
else
    printf("La matrix NO es simetrica ");
}



int main(){

char seguir;
do{
mimatrix();

printf( "\n Hacer de nuevo (s/n)?: ");
        fflush( stdin );
        scanf( "%c", &seguir ); 
  }

while ( seguir != 'n' );    
getch();
return 0;
}