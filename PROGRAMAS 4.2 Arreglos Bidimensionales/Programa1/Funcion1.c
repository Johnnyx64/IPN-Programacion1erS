#include <stdio.h>

void miarray() {
  int matrix[2][3];

  int x=0, y=0;
  int i, j;

for(i = 0; i < 2; i++){
matrix[x][y] = rand() % 24+1;
  for (j = 0; j < 3; j++) {
    matrix[x][y] = rand() % 24+1;
    printf("[");
    printf("%d", matrix[x][y]);
    printf("]");
    y++;
  }
x++;
printf("\n");
}
}

int main(){

    char seguir;
do{
  miarray();

  printf( "\n Hacer de nuevo (s/n)?: ");
        fflush( stdin );
        scanf( "%c", &seguir ); 
  }

while ( seguir != 'n' );

  getch();
  return 0;
}