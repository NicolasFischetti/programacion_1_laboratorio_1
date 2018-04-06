#include <stdio.h>
#include <stdlib.h>
#define CANT_NUMEROS 10
// pedir 10 numeros guardarlos en un array
// todo eso dentro del main, de una funcion mosytrar lo que hay en el array y la cantidad maxima del array.
// funcion que muestre el promedio, funcion que pida array
//pedir los numeros y ordenarlos de mayor a menor
int getInt(char *mensaje, char *error, int intentos, int maximo, int minimo, int *resultado);
int mostrarArrayInt(int* array, int cantidad);
int pedirArrayInt (int* array, int numeroArray);

int main()
{
    int arrayInt[CANT_NUMEROS];
    int i;
    int numeroAuxiliar;
    char seguir;
    int menor;

// busco el minimo, me devuelve el indice, compacto la rail, encuentro el minimo y lo paso

    for (i=0;i< CANT_NUMEROS;i++)
    {
        getInt("\nNumero:","\nFuera de Rango",2,0,100,&numeroAuxiliar);
       arrayInt[i]= numeroAuxiliar;
    }
    mostrarArrayInt(arrayInt, CANT_NUMEROS);

    for (i=0;i<CANT_NUMEROS;i++)
   {
       getInt("\nArray:","\nFuera de Rango",2,0,100,&numeroAuxiliar);
       numeroAuxiliar = arrayInt[i];
   }

    return 0;
}



