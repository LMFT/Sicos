#include "Biblioteca.h"


int CompararDosNumeros (int primerNumero, int segundoNumero)
{
    if(primerNumero < segundoNumero)
    {
        primerNumero = 15;
        return -1;

    }
    else
    {
        if(primerNumero == segundoNumero)
        {
            return 0;
        }
        return 1;
    }
}

int CompararDosNumerosArray (int array[])
{
    array[0] = 85;
    return 3;
}

int PedirEntero (char* mensajeIngreso)
{
    int numeroUsuario;
    printf(mensajeIngreso);
    scanf("%d", &numeroUsuario);
    return numeroUsuario;
}
