#include "Producto.h"

static int ultimoId = 0;

void InicializarArrayProductos(sProducto vector[], int cantidad)
{
    for(int i=0;i<cantidad;i++)
    {
        vector[i].descripcion = "";
        vector[i].precio = 0;
        vector[i].fabricante = "";
        vector[i].estado = BAJA;
    }
}

void AltaProducto(sProducto productos[], int cantidad)
{
    int indiceLibre = BuscarEspacioLibre(productos, cantidad);
    if(indiceLibre != -1)
    {
        productos[indiceLibre] = CargarProducto();
    }
    else
    {
        printf("Error: No hay espacio disponible en el listado");
    }
}

int BuscarEspacioLibre(sProducto productos[], int cantidad)
{
    int indiceLibre = -1;
    for(int i=0;i<cantidad;i++)
    {
        if(productos[i].estado == BAJA)
        {
            indiceLibre = i;
        }
    }
    return indiceLibre;
}

sProducto CargarProducto()
{
    sProducto nuevoProducto;
    /*char descripcion[50];
    char fabricante[30];
    float precio;
    int estado;
    int idProducto;*/
    printf("Ingrese la descripcion del producto");
    //char *fgets(char *str, int n, FILE *stream)
    fgets(nuevoProducto.descripcion, TAMANIO_STRING, stdin);
    printf("Ingrese el nombre del fabricante del producto");
    fgets(nuevoProducto.fabricante, TAMANIO_STRING, stdin);
    printf("Ingrese el precio del producto");
    scanf("%f", nuevoProducto.precio);
    nuevoProducto.estado = ALTA;
    nuevoProducto.idProducto = ++ultimoId; //Devuelve 1
                                //ultimoId++ // Devuelve 0
    return nuevoProducto;
}
