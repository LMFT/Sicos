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
    Dom,    //0
    Lun,    //1
    Mar = 100,
    Mie,    //101
    Jue,    //102
    Vie,    //103
    Sab     //104
}DiaSemana;

//Uniones

typedef union Dato
{
    int miEntero;
    float miFlotante;
    char miTexto[50];
}Dato;

int main()
{
    //Recursividad
    printf("%d\n", Factorial(5));

    //Enumerados

    DiaSemana dia = Dom;
    DiaSemana otroDia = 1;

    printf("%d\n", dia);
    printf("%d\n", otroDia);

    //Uniones
    Dato miUnion;
    miUnion.miEntero = 10;
    miUnion.miFlotante = 53.2345;
    strcpy(miUnion.miTexto, "Estoy aprendiendo uniones en C");

    printf("%d\n", miUnion.miEntero);
    printf("%.4f\n", miUnion.miFlotante);
    printf("%s\n", miUnion.miTexto);

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
