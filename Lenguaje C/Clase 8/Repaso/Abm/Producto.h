#include <stdio.h>
#include <stdlib.h>

#define BAJA 0
#define ALTA 1
#define TAMANIO_STRING 50

#ifndef PRODUCTO_H_INCLUDED
#define PRODUCTO_H_INCLUDED

typedef struct sProducto
{
    char descripcion[TAMANIO_STRING];
    char fabricante[TAMANIO_STRING];
    float precio;
    int estado;
    int idProducto;
}sProducto;

#endif // PRODUCTO_H_INCLUDED
