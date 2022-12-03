#include <stdio.h>

int par,nopar,val,num,i;

void numeros(){

    printf("\n cuantos numeros comprobaras?\n");
    scanf("%d", &val);
    for(i=1; i<=val; i++){

        printf("\n teclea los numeros: \n");
        scanf("%d", &num);
        if(num%2==0)
        {par=par+1;}else{nopar=nopar+1;}

    }

    printf("\n los numeros pares son:%d " ,par);
    printf("\n los numeros impares son:%d " ,nopar);


        
}
int main(){
    numeros();
    getch();
    return 0;
 
}