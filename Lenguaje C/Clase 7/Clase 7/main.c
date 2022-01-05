#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "VariablesExternas.h"
/*

Recursividad
Enumerados
Uniones
Variables externas

*/

//5! = 5*4*3*2*1

// 5! = 5*4!

//4! = 4*3!

int Factorial(int numero);

//Enumerados
typedef enum DiaSemana
{
    Dom,
    Lun,
    Mar,
    Mie,
    Jue,
    Vie,
    Sab
}DiaSemana;

//Uniones

typedef union Dato
{
    int miEntero;
    float miFlotante;
    char miTexto[50];
}Dato;

//Variables Externas



int main()
{
    variableExterna = 15;
    printf("%d\n", variableExterna);
    MiFuncion();
    printf("%d\n", variableExterna);
    return 0;
}

//Recursividad

int Factorial(int numero) //5
{

    if(numero<0)
    {
        return -1;
    }
    else
    {
        if(numero == 0 || numero == 1)
        {
            return 1;
        }
        else
        {
            return numero*Factorial(numero-1);
        }
    }
}
