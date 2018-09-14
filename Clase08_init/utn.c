#include <stdio_ext.h>
#include <string.h>
#include <stdlib.h>
#include "utn.h"


static int isValidNombre(char* pBuffer, int limite);

static int getString(char* pBuffer, int limite);

/**
    utn_getNombre :
    @param
    @param
    @return
*/
static int isValidNombre(char* pBuffer, int limite) // las funciones que empiezan con is devuelve verdadero o falso
{
    int retorno = 1;
    int i;

    if(pBuffer != NULL && limite > 0) {

        for(i=0; i<limite && pBuffer[i] != '\0';i++) {

        if((pBuffer[i] != ' ') && (pBuffer[i] < 'a' || pBuffer[i] > 'z') && (pBuffer[i] < 'A' || pBuffer[i] > 'Z')== 0) {
            //tolower me devuelve el mismo caracter en minuscula, toupper mayuscula y to ctype.h
            //(tolower(pBuffer[i]) < 'a' || tolower(pBuffer[i]) > 'z')
            retorno = 0;
            break;
        }

    }
}


   return 0;
}

/**
    utn_getNombre :
    @param
    @param
    @return
*/
static int getString(char* pBuffer, int limite)
{
    int retorno = -1;
    char bufferStr[4096];
    int len;

    if(pBuffer != NULL && limite > 0) {

        __fpurge(stdin);
        fgets(bufferStr,limite,stdin); // entrada de datos stdin // get pone /0/n Si entra el contrabarra
        // /0 lo pone sino pone el /n /0. Hay que limpiar el /n.
        len = strlen(bufferStr);

        if(len != limite-1 || bufferStr[limite-2] == '\n') {

            bufferStr[len-1] = '\0';
        }
            retorno = 0;
            strncpy(pBuffer, bufferStr, limite);
    }


    return retorno;
}



int utn_getNombre(char* pNombre, int limite, char* msg, char* msgErr, int reintentos)
{
    int retorno=-1;
    char bufferNombre[4096];

    if(pNombre != NULL && limite > 0 && msg != NULL && msgErr != NULL && reintentos >= 0)
    {
        do {
                reintentos--;
                printf("%s", msg);

                if(getString(bufferNombre, limite) == 0 && isValidNombre(bufferNombre, limite)) {

                    strncpy(pNombre, bufferNombre, limite); // se utiliza esta funcion para copiar
                    retorno = 0;
                    break;

                } else {

                    printf("%s",msgErr);

                }
            // el continue llega hasta aca
            // static las hace privada para que no las usen de afuera
        } while(reintentos >= 0);

    }

    return retorno;
}




















