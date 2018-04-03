#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main()
{
    char seguir='s';
    int opcion=0;
    float numeroA;
    float numeroB;
    float resultado;
    float total = 0;

    while(seguir=='s')
    {

        printf("1- Ingresar 1er operando %.2f\n", numeroA);
        printf("2- Ingresar 2do operando %.2f\n", numeroB);
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
                resultado= sumar( numeroA,  numeroB);
                printf("La suma es %.2f\n", resultado );
                break;
            case 4:
                resultado= restar( numeroA,  numeroB);
                printf("La resta es %.2f\n", resultado );
                break;
            case 5:
                resultado= dividir( numeroA,  numeroB);
                printf("La división es %.2f: \n", resultado);
                break;
            case 6:
                resultado= multiplicar( numeroA,  numeroB);
                printf("La multiplicacion es: %.2f\n", resultado);
                break;
            case 7:
                resultado= factoriar(numeroA);
                printf("El numero factoriado es %.2f: \n", resultado);
                break;
            case 8:
                total= total +
                printf("El total de todas las operaciones es: %.2f\n");
                break;
            case 9:
                seguir = 'n';
                break;
        }
    }

    return 0;
}

