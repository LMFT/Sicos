#include <stdio.h>
#include <stdlib.h>

int main()
{/*
    //Secuencias condicionales
    int miNumero;

    printf("Ingrese un numero: ");
    scanf("%d", &miNumero);
    //1- If
    //si el numeor es positivo (>0)
        //Si la condicion da 0 es falso
        //Sino es verdadero
    if(miNumero>0)
    {
        printf("\nEl numero es positivo");
    }
    //2- Else
    else
    {
        if(miNumero < 0)
        {
            printf("\nEl numero es negativo");
        }
        else
        {
            printf("\nEl numero es 0\n");
        }
    }

    //3- Switch

    int numeroMes = 1;

    switch(numeroMes)
    {
        case 1:
            printf("Enero\n");
            break;
        case 2:
            printf("Febrero\n");
            break;
        case 3:
            printf("Marzo\n");
            break;
        case 4:
            printf("Abril\n");
            break;
        case 5:
            printf("Mayo\n");
            break;
        case 6:
            printf("Junio\n");
            break;
        case 7:
            printf("Julio\n");
            break;
        case 8:
            printf("Agosto\n");
            break;
        case 9:
            printf("Septiembre\n");
            break;
        case 10:
            printf("Octubre\n");
            break;
        case 11:
            printf("Noviembre\n");
            break;
        case 12:
            printf("Diciembre\n");
            break;
        default:
            printf("Error: No existe ese numero de mes\n");
    }
*/


// Secuencias de repeticion (o iteracion, bucles)
/*
    int miNumero;
    int i = 6; //iterador para contar cuantas repeticiones se hicieron

    printf("Ingrese 5 numeros: ");

    //1- While
    while(i<=5)
    {
        printf("Estoy dentro del while");
        scanf("%d", &miNumero);
        printf("%d: %d \n", i, miNumero);
        //Siempre modificar la variable que controla al bucle
        i++; // i = i +1

    }

    do
    {
        printf("Estoy dentro del do-while");
        scanf("%d", &miNumero);
        printf("%d: %d \n", i, miNumero);
        //Siempre modificar la variable que controla al bucle
        i++; // i = i +1
    }while(i<=5);

    //3- For
    //A diferencia del while carga todo en el parentesis
    for(i = 1;i<=5;i++)
    {
        scanf("%d", &miNumero);
        printf("%d: %d\n", i, miNumero);
    }*/

    //For se usa cuando ya conocemos la cantidad de iteraciones
    //While se usa cuando NO conocemos la cantidad de iteraciones
    //Do-While se usa cuando el codigo se debe ejecutar al menos una vez

    //////////////////////////////////////////////////////////////////////////

    int numeroUsuario;
    int minimo;
    int maximo;

    printf("Ingrese 3 numeros entre 0 y 100: ");

    //Para comparar ( == )

    //Operadores Lógicos
    // 1- Or ( || )
    //2- And ( && )
    //3- Not ( ! )

    for(int i = 0;i<3;i++)
    {

        scanf("%d", &numeroUsuario);
        if(numeroUsuario <= 100 && numeroUsuario >=0)
        {
            if(numeroUsuario > maximo || i == 0)
            {
                maximo = numeroUsuario;
            }

            if(numeroUsuario < minimo || i == 0)
            {
                minimo = numeroUsuario;
            }
        }
        else
        {
            printf("\nEl numero ingresado debe estar entre 0 y 100");
            i--;
        }
    }

    printf ("\nEl numero mas grande que se ingreso es: %d\n", maximo);
    printf ("\nY el numero mas chico que se ingreso es: %d\n", minimo);

    return 0;
}
