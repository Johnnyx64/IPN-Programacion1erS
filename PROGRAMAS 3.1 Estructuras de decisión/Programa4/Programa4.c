#include <stdio.h>
#include <stdlib.h>

void PeticionNumeros()
{
    int A,B,C,D,X;
    printf("Ingresa el primer numero\n ");
    scanf("%d",&A);
    printf("Ingresa el segundo numero\n ");
    scanf("%d",&B);
    printf("Ingresa el tercer numero\n ");
    scanf("%d",&C);
    printf("Ingresa el cuarto numero\n ");
    scanf("%d",&D);
    if(A > B && A > C && A > D){
            X=A;
        }else{
            if(B > A && B > C && B > D){
                X=B;
            }else{
                if(C > A && C > B && C > D){
                    X=C;
                }else
                    X=D;
            }
        }
    printf("el numero mayor es %d ",X);
   return 0;
}

int main()
{
PeticionNumeros();
getch();
return 0;
}