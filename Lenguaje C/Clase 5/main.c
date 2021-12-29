#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMANIO_CADENA 40

/** Clase 5: Cadenas de caracteres

- Como representarlas en C
- Funciones para trabajar con ellas:
    * scanf (recordar espacios en cadenas)
    * gets (no segura)
    * fgets
    * strlen
    * strcmp
    * strcpy
    * strcat
**/

int main()
{
    char texto[10];
    //1 Scanf
    //scanf("%s", texto);

    //2- Gets
    //gets(texto);

    //3- fgets
    //char *fgets(char *str, int n, FILE *stream)
    //fgets(texto, 10, stdin);

    //printf("El usuario ingres%c: ", 162);
    //printf("%s\n", texto);

    //* strlen - Cantidad de caracteres del string
    //* strcmp - Compara 2 string
    //* strcpy - Copia un string
    //* strcat

    //printf("Cantidad de caracteres: %d", strlen(texto));

//     Lucas - Luces
    //int resultadoComparacion = strcmp("Lucas", "Lucas");
    //printf("\n%d", resultadoComparacion);

    //char destino[5];
    //char origen[10] = "Profesor";
    //strcpy(destino, origen);
    //printf("%s", destino);


    char origen[20] = "Lucas";
    char destino[30] = "Profesor: ";

    strcat(destino, origen);

    printf("%s", destino);

    return 0;
}
