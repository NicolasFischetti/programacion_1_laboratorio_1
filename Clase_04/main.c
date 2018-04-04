#include <stdio.h>
#include <stdlib.h>

int sumar (int numeroA, int numeroB);
int getInt(char* mensaje, char* mensajeError, int intentos , int minimo, int maximo, int* resultado);

int main()
{   //int numeroUno;
    //int numeroDos;
    //int resultado;
    int edad;

    if (getInt("Ingrese su edad\n", "Error: El rango es 0-100", 5, 1, 100, &edad ) == 0)
    {
        printf("La edad es: %d\n", edad);
    }
    else
    {
        printf("Error");
    }

    //printf("Ingrese el primer numero\n");
    //scanf("%d", &numeroUno);
    //printf("Ingrese el segundo numero\n");
   // scanf("%d", &numeroDos);
   // resultado= sumar(numeroUno, numeroDos);
    //printf("La suma de los numeros es: %d", resultado);





    return 0;
}

/*int sumar (int numeroA, int numeroB)
{
    int resultado;
    resultado= numeroA + numeroB;
    return resultado;*/
//}

int getInt(char* mensaje, char* mensajeError, int reintentos , int minimo, int maximo, int* resultado)//&edad
{


    int retorno = -1;
    int auxiliarEntero;
    do
    {

        reintentos--;
        printf("%s", mensaje);
        scanf("%d", &auxiliarEntero);

        if (auxiliarEntero >= minimo && auxiliarEntero <= maximo)
        {
        retorno = 0;
        *resultado= auxiliarEntero;
        break;
        }
        else if (auxiliarEntero < minimo)
        {
        retorno= -1;
        }
        else
        {
        retorno= -2;
        }
        printf("%s", mensajeError);
    } while(reintentos >= 0);

    return retorno;
}
