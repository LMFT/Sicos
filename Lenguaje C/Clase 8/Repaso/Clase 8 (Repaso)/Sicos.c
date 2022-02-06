#include "Sicos.h"

void InicializarMatrizInt(int matriz[][10], int cantidadFilas, int cantidadColumnas, int valorInicial)
{
    for(int i=0;i<cantidadFilas;i++)
    {
        IniciazarVectorInt(matriz[i], cantidadColumnas, valorInicial);
    }
}

void IniciazarVectorInt(int vector[], int cantidadElementos, int valorInicial)
{
    for(int j=0;j<cantidadElementos;j++)
    {
        vector[j] = valorInicial;
    }
}

//Pedir un numero
int GetInt(char mensaje[])
{
    int auxiliar;
    printf("%s", mensaje); // Ingrese edad del alumno
    scanf("%d", &auxiliar);
    return auxiliar;
}

void CargarVectorInt(int vector[], int cantidadElementos, char mensaje[])
{
    int i = 0;
    char respuestaUsuario;
    do
    {
        vector[i] = GetInt(mensaje);
        i++;
        printf("Desea cargar otra edad? (s/n): ");
        fflush(stdin);
        scanf("%c", &respuestaUsuario);
    }while(respuestaUsuario == 's' || i == cantidadElementos);
}

float CalcularPromedioVector(int vector[], int cantidadElementos)
{
    int elementosValidos = 0;
    float totalAcumulado = 0;
    for(int i=0;i<cantidadElementos;i++)
    {
        if(vector[i] != -1)
        {
            elementosValidos++;
            totalAcumulado += vector[i];
        }
    }
    return totalAcumulado/elementosValidos;
}
