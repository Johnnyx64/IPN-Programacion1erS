#include <stdio.h>
#include <stdlib.h>

void Datauser()
{
char nombre[20] = "JuanRodriguez"; //Tu nombre
char direccion[20] = "cuautitlan"; // Tu direccion
int edad = 20;// Tu edad
char hobbies[20] = "Jugar RL"; //Tus pasatiempos
printf("nombre:%s, direccion:%s, edad:%d, hobbies:%s ", nombre,direccion,edad,hobbies); //print all variable with the format %s for print all characters
}

int main()
{
Datauser();
getchar();
return 0;
}


