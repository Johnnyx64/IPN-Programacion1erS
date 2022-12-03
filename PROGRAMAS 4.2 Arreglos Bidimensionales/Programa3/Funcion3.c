
#include <stdio.h>
#include<conio.h>



int main()
{
	int numeros[100][100],filas,columnas,i,j;
	
	printf("Digite el numero de columnas: ");
    scanf("%d",&filas);
	printf("Digite el numero de filas: ");
    scanf("%d",&columnas);
	
	//Rellenando la matriz	
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			printf("valor  [%d , %d] : ", i,j);
			scanf(" %d",&numeros[i][j]);
		}
	} 
	
	printf("\nMostrando matriz\n\n");
	
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			printf(numeros[i][j]);
		}
		printf("\n");
	}
	
	
	getch();
	return 0;
}
