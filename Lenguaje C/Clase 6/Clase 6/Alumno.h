#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef ALUMNO_H_INCLUDED
#define ALUMNO_H_INCLUDED

typedef struct eAlumno
{
    char nombre[25];
    char apellido[25];
    int legajo;
    int notaPrimerParcial;
    int notaSegundoParcial;

}eAlumno;

eAlumno Alumno_Ingresar();
eAlumno Alumno_CambiarNombre(eAlumno alumno);
int Alumno_Comparar(eAlumno primerAlumno, eAlumno segundoAlumno);
void Alumno_Mostrar(eAlumno alumno);

#endif // ALUMNO_H_INCLUDED
