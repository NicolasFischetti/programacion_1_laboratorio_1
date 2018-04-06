int mostrarArrayInt(int* array, int cantidad)
{
    int retorno = -1;
    int i;
    if (cantidad > 0)
    {
        retorno = 0;
        for (i=0;i<cantidad;i++)
        {
            printf("%d",array[i]);
        }
    }
    return retorno;
}

int getInt(char *mensaje, char *error, int intentos, int minimo, int maximo, int *resultado)
{
    int auxiliarEntero;
    int retorno = -1;
    do
    {
        intentos--;
        printf("%s \n", mensaje);
        scanf("%d", &auxiliarEntero);
        if(auxiliarEntero >= minimo && auxiliarEntero <= maximo)
        {
            retorno = 0;
            *resultado = auxiliarEntero;
            break;
        }
        else
        {
            if(auxiliarEntero < minimo)
            {
                retorno = -2;
            }
            else
            {
                retorno = -1;
            }
        }
        printf("%s", error);
    }while(intentos >= 0);

    return retorno;
}
