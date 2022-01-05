#include "Alumno.h"

static int ultimoLegajo = 1;

eAlumno Alumno_Ingresar()
{
    eAlumno nuevoAlumno;
    //Carga del nombre
    printf("\nIngrese el nombre del alumno: ");
    fgets(nuevoAlumno.nombre, 25, stdin);
    fflush(stdin);
    //Carga del apellido
    printf("\nIngrese el apellido del alumno: ");
    fgets(nuevoAlumno.apellido, 25, stdin);
    fflush(stdin);
    //Carga del legajo
    nuevoAlumno.legajo = ultimoLegajo;
    ultimoLegajo++;
    //Carga de la nota 1
    printf("\nIngrese la nota del primer parcial: ");
    scanf("%d", &nuevoAlumno.notaPrimerParcial);
    //Carga de la nota 2
    printf("\nIngrese la nota del segundo parcial: ");
    scanf("%d", &nuevoAlumno.notaSegundoParcial);

    return nuevoAlumno;
}


eAlumno Alumno_CambiarNombre(eAlumno alumno)
{
    fflush(stdin);
    printf("\nIngrese el nombre del alumno: ");
    fgets(alumno.nombre, 25, stdin);
    return alumno;
}

int Alumno_Comparar(eAlumno primerAlumno, eAlumno segundoAlumno)
{
    if(primerAlumno.legajo == segundoAlumno.legajo)
    {
        return 1;
    }
    return 0;
}

void Alumno_Mostrar(eAlumno alumno)
{
    printf("\nNombre: %s", alumno.nombre);
    printf("\nApellido: %s", alumno.apellido);
    printf("\nLegajo: %d", alumno.legajo);
    printf("\nPrimer nota: %d", alumno.notaPrimerParcial);
    printf("\nSegunda nota: %d", alumno.notaSegundoParcial);
}
