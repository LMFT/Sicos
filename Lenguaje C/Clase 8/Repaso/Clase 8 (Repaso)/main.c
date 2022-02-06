#include "Sicos.h"

/******************************************************************
* Programa: Repaso Arrays y funciones
*
* Objetivo:
*   Cargar las edades de los alumnos de 5 cursos (cada curso no tiene mas de 50 personas)
*   y obtener la edad promedio por cada curso
*
*   Realizar todos los pasos en funciones cuando sea posible
*
* *******************************************************************/
#define CANTIDAD_CURSOS 5
#define CANTIDAD_ALUMNOS 10
int main()
{
    //Declarar variables

    char nombreCurso[CANTIDAD_CURSOS][30] = {"Programacion","Electronica","Electricidad",
                                            "Turismo","Navegacion"};
    int edadesAlumnos[CANTIDAD_CURSOS][CANTIDAD_ALUMNOS];
    float promedioEdades[CANTIDAD_CURSOS];

    InicializarMatrizInt(edadesAlumnos, CANTIDAD_CURSOS, CANTIDAD_ALUMNOS, -1);

    for(int i=0;i<CANTIDAD_CURSOS;i++)
    {
        printf("%s\n",nombreCurso[i]);
        CargarVectorInt(edadesAlumnos[i], CANTIDAD_ALUMNOS, "\nIngrese la edad del alumno: ");
        promedioEdades[i] = CalcularPromedioVector(edadesAlumnos[i], CANTIDAD_ALUMNOS);
        system("cls");
    }

    for(int i=0;i<CANTIDAD_CURSOS;i++)
    {
        printf("\nEl promedio de edad del curso %s es %.2f", nombreCurso[i], promedioEdades[i]);
    }






    /*for(int i=0;i<CANTIDAD_CURSOS;i++)
    {
        for(int j=0;j<CANTIDAD_ALUMNOS;j++)
        {
            printf("%d\n", edadesAlumnos[i][j]);
        }
    }*/



    //printf("Hello world!\n");
    return 0;
}
