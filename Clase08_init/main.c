#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"


#define CANTIDAD_EMPLEADOS 6

void ordenarPorNombre(char* pNombres[] [50], char* pApellidos[] [50], char* pDNI [] [50], int limite) {
    // hay que pasarle un array de string y caracteres, hay que pasarle la cantidad
    int swap;
    int i;
    char bufferStr[250];

    do {

        swap = 0;

        for(i=0; i < limite-1;i++){

            if(strcmp(pNombres[i],pNombres[i+1]) > 0) {

                swap = 1;

                strcpy(bufferStr, pNombres[i]);
                strcpy(pNombres[i], pNombres[i+1]);
                strcpy(pNombres[i+1], bufferStr);

                strcpy(bufferStr, pApellidos[i]);
                strcpy(pApellidos[i], pApellidos[i+1]);
                strcpy(pApellidos[i+1], bufferStr);

                strcpy(bufferStr, pDNI[i]);
                strcpy(pDNI[i], pDNI[i+1]);
                strcpy(pDNI[i+1], bufferStr);

            }
        }

    }while(swap);

}

int main()
{
    char nombres[CANTIDAD_EMPLEADOS][50] = {"AAA", "CCC", "BBB"};
    char apellidos[CANTIDAD_EMPLEADOS][50] = {"AAA", "CCC", "BBB"};
    char dni[CANTIDAD_EMPLEADOS][50] = {"AAA", "CCC", "BBB"};
    int i;


    ordenarPorNombre(nombres,apellidos,dni,CANTIDAD_EMPLEADOS);
    /*int j;
    int aux;

    for(i=0; i < CANTIDAD_EMPLEADOS-1;i++) {

        for(j=i+1; j < CANTIDAD_EMPLEADOS;i++) {

            if(strcmp(nombres[i],nombres[j])==0)
            {
                 strncpy()

            }


        }

    }*/




   /* for(i=0;i < CANTIDAD_EMPLEADOS;i++)
    {
            utn_getNombre(nombres[i],50,"Ingrese su nombre: ","\ndato invalido. Prueba nuevamente: ",2);
    }*/
    for(i=0;i<CANTIDAD_EMPLEADOS;i++)
    {
        printf("%s %s %s",nombres[i], apellidos[i], dni[i]);
    }
    return 0;
}
