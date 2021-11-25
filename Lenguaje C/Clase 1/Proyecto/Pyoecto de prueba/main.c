#include <stdio.h>
#include <stdlib.h>
//Declaro una constante
#define PI 3.14


/***********************************************************
    1 - Introducción
    1.0 Qué es C y por qué usarlo
    1.1 Variables, constantes y operadores

        1.1.1 Nombres de identificadores
        1.1.2 Tipos de datos
        1.1.3 Constantes
        1.1.4 Operadores aritméticos.
        1.1.5 Operadores relacionales y lógicos ?

    1.2 Forma general de un programa
*************************************************************/


/************************************************************
    Lista de palabras reservadas:

    auto, break, case, char, const, continue, default
    do, double, else, enum, extern, float, for
    goto, if, int, long, register, return, short
    signed, sizeof, static, struct, switch, typedef, union
    unsigned, void, volatile, while

************************************************************/



int main()
{
    /*
        int - Integer (numero entero) (guarda un maximo de aprox 2 billones) -  %d
        float - Numero en punto flotante (numero decimal)                       %f
        char - Character (caracter, letra, simbolo, numero en formato texto)    %c
        String (no existe en C) representa texto                                %s
    */

    // (tipo de dato) (identificador o nombre) (opcional un valor inicial)

    int unNumero; //siempre terminar en punto y coma
    //Si no la inicializo muestra basura
    int otroNumero = 15;
    float unNumeroFlotante = 5.48;
    unNumero = 10;
    // Suma: +
    // Resta: -
    // Multiplicacion: *
    // Division /
    // Resto de la division entera: %

    //Me permite imprimir algo en pantalla
    printf("La suma vale: %d\n", unNumero + otroNumero);
    printf("La resta vale: %d\n", unNumero - otroNumero);
    printf("La multiplicacion vale: %d\n", unNumero * otroNumero);
    printf("La division vale: %d\n", unNumero / otroNumero);
    printf("El resto de la division vale: %d\n", unNumero % otroNumero);
    printf("Un numero flotante vale: %.2f\n", unNumeroFlotante);
    printf("Pi  vale: %.2f\n", PI);

    return 0;
}
