#include "Producto.h"
#define CANT_PRODUCTOS 10

int main()
{
    sProducto productos[CANT_PRODUCTOS];
    int opcion;

    InicializarArrayProductos(productos, CANT_PRODUCTOS);
    do
    {
        printf("MENU DE OPCIONES\n");
        printf("\n1- Alta de producto");
        printf("\n2- Modificar producto");
        printf("\n3- Eliminar producto");
        printf("\n4- Listar producto");
        printf("\n5- Salir\n");
        printf("\nIngrese una opcion: ");
        scanf("%i", &opcion);

        switch(opcion)
        {
            case 1:
                //Alta
                break;
            case 2:
                //Modificar
                break;
            case 3:
                //Eliminar
                break;
            case 4:
                //Mostrar
                break;
            case 5:
                //Salir
                break;
            default:
                //Error
                break;
        }
    }while()


    return 0;
}

//Baja física
/*Elimina permanentemente el producto*/

//Baja lógica
//Elimina mediante un dato, pero conserva los valores cargados
