#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

float sumar(float x, float y);
float restar(float x, float y);
float dividir(float x, float y);
float multiplicar(float x, float y);
float factoriar(float x);

int main()
{
    char seguir='s';
    int opcion=0;
    float numeroA;
    float numeroB;
    float resultado;
    int total;

    while(seguir=='s')
    {

        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("Ingrese el numero A\n");
                scanf("%f", &numeroA);
                break;
            case 2:
                printf("Ingrese el numero B\n");
                scanf("%f", &numeroB);
                break;
            case 3:
                printf("Ingrese el numero A\n");
                scanf("%f", &numeroA);
                printf("Ingrese el numero B\n");
                scanf("%f", &numeroB);
                resultado= sumar( numeroA,  numeroB);
                printf("La suma es %.2f", resultado );
                break;
            case 4:
                printf("Ingrese el numero A\n");
                scanf("%f", &numeroA);
                printf("Ingrese el numero B\n");
                scanf("%f", &numeroB);
                resultado= restar( numeroA,  numeroB);
                printf("La resta es %.2f\n", resultado );
                break;
            case 5:
                printf("Ingrese el numero A\n");
                scanf("%f", &numeroA);
                printf("Ingrese el numero B\n");
                scanf("%f", &numeroB);
                resultado= dividir( numeroA,  numeroB);
                if (numeroB == 0)
                {
                    printf("La división no es valida, intentelo de nuevo...\n");
                }
                else
                {
                    printf("La división es %.2f\n", resultado );
                }
                break;
            case 6:
                printf("Ingrese el numero A\n");
                scanf("%f", &numeroA);
                printf("Ingrese el numero B\n");
                scanf("%f", &numeroB);
                resultado= multiplicar( numeroA,  numeroB);
                printf("La multiplicacion es: %.2f\n", resultado);
                break;
            case 7:
                printf("Ingrese el numero A\n");
                scanf("%f", &numeroA);
                resultado= factoriar(numeroA);
                if (numeroA < 0)
                {
                    printf("Ingrese el numero nuevamente\n");
                }
                else
                {
                    printf("El numero factoriado es %.2f: \n", resultado);
                }
                break;
            case 8:
                total= sumar(numeroA, numeroB) + restar(numeroA, numeroB) + dividir(numeroA, numeroB) + multiplicar(numeroA, numeroB) + factoriar(numeroA);
                printf("El total es: %d\n", total);
                break;
            case 9:
                seguir = 'n';
                break;
        }
    }

    return 0;
}
float sumar(float x, float y)
{
    float resultado;
    resultado= x+y;
    return resultado;
}
float restar(float x, float y)
{
    float resultado;
    resultado= x-y;
    return resultado;
}
float dividir(float x, float y)
{
    float resultado;
    resultado= x/y;
    return resultado;
}
float multiplicar(float x, float y)
{
    float resultado;
    resultado= x*y;
    return resultado;
}
float factoriar(float x)
{
    float resultado = 1;
    for (int i = 1; i <= x ; i++)
    {
        resultado= resultado *i;
    }
    return resultado;
}
