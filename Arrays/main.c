#include <stdio.h>
#include <stdlib.h>
#define TAM 5
#include "funciones.h"

int main()
{
    int miArray[TAM];
    int indice;

    cargarArray(miArray,TAM);

    mostrarArray(miArray,TAM);

    indice=buscarValor(miArray,TAM,5);

    if(indice==-1)
    {
        printf("\nNo se encontro el valor");
    }
    else
    {
        printf("\nEl indice es: %d", indice);
    }


    return 0;
}
