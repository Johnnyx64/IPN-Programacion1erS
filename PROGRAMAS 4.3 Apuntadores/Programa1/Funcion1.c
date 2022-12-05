#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int numero=10;
int main(){
                
int arr[100]; //mi array para guardar los digitos
int x,i,d; //apuntadores


printf("Se ordenaran los siguientes %d numero que insertes\n " , numero);

for(x=0;x<numero;x++){
printf("ingresa un numero entero: "); //ingresan n numeros
scanf("%d",&arr[x]);
}


// el famosisimo metodo burbuja (todos usan nadie entiende pero, ahi esta )
for(x=0;x<numero;x++){
    for(i=0,d=1;d<numero;i++,d++){
        if(arr[i]>arr[d]){
        int pos=arr[d];
        arr[d]=arr[i];
        arr[i]=pos;
    }
  }
}
for(x=0;x<numero;x++){
    printf("\n%d", arr[x]);
}
}

