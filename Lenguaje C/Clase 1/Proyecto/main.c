//Declaracion de bibliotecas
#include <stdio.h>
#include <stdlib.h>

//Declaracion de constantes
#define PI 3.14

//Declaracion de prototipos (declaracion de funciones)
int EsPar(int numero); //Caso de ejemplo, lo vemos mas adelante

//Implementacion del main (punto de entrada del programa)
int main()
{
    //Declaracion de variables
    int primerNumero; //mascara de formato es %d
    int segundoNumero;
    int suma;
    int resta;
    int multiplicacion;

    //Implementacion de la logica del programa

    //Pidiendole al usuario que ingrese un numero
    printf("Ingrese el primer numero: \n");
    //Leer el numero numero del usuariofduhg
    scanf("%d", &primerNumero);

    printf("Ingrese el segundo numero: \n");
    scanf("%d", &segundoNumero);

    suma = primerNumero + segundoNumero;
    resta = primerNumero - segundoNumero;
    multiplicacion = primerNumero * segundoNumero;

    printf("El resultado de la suma es: %d \n", suma);
    printf("El resultado de la resta es: %d \n", resta);
    printf("El resultado de la multiplicacion es: %d \n", multiplicacion);

    //Retorno
    return 0;
}

//Implementacion de las funciones

