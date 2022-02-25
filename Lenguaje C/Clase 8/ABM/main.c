#include "Producto.h"
#define CANT_PRODUCTOS 10

int main()
{
    sProducto productos[CANT_PRODUCTOS];
    int opcion;
    char menu[3][256];
    float precioMaximo;

    sProducto_InicializarArrayProductos(productos, CANT_PRODUCTOS);
    do
    {
        printf("MENU DE OPCIONES\n");
        printf("\n1- Alta de productos");
        printf("\n2- Modificar productos");
        printf("\n3- Eliminar productos");
        printf("\n4- Mostrar productos");
        printf("\n5- Salir\n");
        printf("\nIngrese una opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
            case 1:
                //Alta
                sProducto_AltaProducto(productos, CANT_PRODUCTOS);
                break;
            case 2:
                //Modificar
                ModificarProducto(productos, CANT_PRODUCTOS);
                break;
            case 3:
                //Eliminar
                BajaProducto(productos, CANT_PRODUCTOS);
                break;
            case 4:
                fflush(stdin);
                //Mostrar
                strcpy(menu[0],"Mostrar todo");
                strcpy(menu[1],"Productos con precio menor a x");
                strcpy(menu[2],"Cancelar");
                opcion = MostrarMenu(menu, 3);
                switch(opcion)
                {
                    case 1:
                        MostrarTodosLosProductos(productos, CANT_PRODUCTOS);
                        break;
                    case 2:
                        printf("\nIngrese el precio maximo de los productos: ");
                        scanf("%f", &precioMaximo);
                        FiltrarPorPrecio(productos, CANT_PRODUCTOS, precioMaximo);
                       break;
                    case 3:
                       break;
                    default:
                        printf("\nError: Esta opcion no existe");
                }
                break;
            case 5:
                //Salir
                break;
            default:
                //Error
                break;
        }
    }while(opcion != 5);


    return 0;
}



//Baja física
/*Elimina permanentemente el producto*/
//Baja lógica
//Elimina mediante un dato, pero conserva los valores cargados
