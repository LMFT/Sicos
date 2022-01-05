#include "Alumno.h"

//Estructuras


int main()
{
    eAlumno listadoAlumnos[10];
    for(int i=0;i<3;i++)
    {
        listadoAlumnos[i] = Alumno_Ingresar();
    }

    for(int i=0;i<3;i++)
    {
        Alumno_Mostrar(listadoAlumnos[i]);
    }

    eAlumno aux = listadoAlumnos[0];
    listadoAlumnos[0].nombre = listadoAlumnos[1].nombre;
    listadoAlumnos[1] = aux;

    for(int i=0;i<3;i++)
    {
        Alumno_Mostrar(listadoAlumnos[i]);
    }

    if(listadoAlumnos[0] == listadoAlumnos[1])
    {
        printf("Es el mismo alumno");
    }

    return 0;
}

