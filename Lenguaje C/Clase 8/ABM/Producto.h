#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Sicos.h"

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

void sProducto_InicializarArrayProductos(sProducto vector[], int cantidad);
sProducto InicializarProducto();
void sProducto_AltaProducto(sProducto productos[], int cantidad);
int sProducto_BuscarEspacioLibre(sProducto productos[], int cantidad);
sProducto sProducto_CargarProductoConId();
sProducto sProducto_CargarProductoSinId();
int MostrarProducto (sProducto producto);
int MostrarTodosLosProductos(sProducto productos[], int cantidad);
void ModificarProducto(sProducto productos[], int cantidad);
int BuscarProductoPorID(sProducto productos[], int cantidad, int idProducto);
int BajaProducto(sProducto productos[], int cantidad);
int FiltrarPorPrecio(sProducto productos[], int cantidad, float precioMaximo);
#endif // PRODUCTO_H_INCLUDED
