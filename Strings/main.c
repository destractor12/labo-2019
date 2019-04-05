#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char nombre[50];
    int largo;


    printf("Ingrese su nombre: ");
    gets(nombre);
    //fgets(nombre,50,stdin);
    //scanf("%[^\n]", nombre);
    largo = strlen(nombre);

    printf("su nombre es: %s", nombre);

    return 0;
}
