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

int Confirmar(char mensaje[], char aceptar, char cancelar)
{
    char respuesta;
    int retorno;
    do
    {
        fflush(stdin);
        printf("%s", mensaje);
        scanf("%c", &respuesta);
        if(respuesta == aceptar)
        {
            retorno = 1;
        }
        else if(respuesta == cancelar)
        {
            retorno = 0;
        }
    }while(respuesta != aceptar && respuesta != cancelar);
    return retorno;
}


int MostrarMenu(char menu[][256], int cantidadOpciones)
{
    int opcionSeleccionada;
    for(int i=0;i<cantidadOpciones;i++)
    {
        printf("\n%s", menu[i]);
    }
    printf("\nSeleccione una opcion: ");
    scanf("%d", &opcionSeleccionada);
    return opcionSeleccionada;
}
