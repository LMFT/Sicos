#include "Biblioteca.h"


int CompararDosNumeros (int primerNumero, int segundoNumero)
{
    if(primerNumero < segundoNumero)
    {
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

int PedirEntero (char* mensajeIngreso)
{
    int numeroUsuario;
    printf(mensajeIngreso);
    scanf("%d", &numeroUsuario);
    return numeroUsuario;
}
