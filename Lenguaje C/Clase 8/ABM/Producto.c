#include "Producto.h"

static int ultimoId = 0;

void sProducto_InicializarArrayProductos(sProducto vector[], int cantidad)
{
    for(int i=0;i<cantidad;i++)
    {
        vector[i] = InicializarProducto();
    }
}

sProducto InicializarProducto()
{
    sProducto producto;
    strcpy(producto.descripcion, "");
    producto.precio = 0;
    strcpy(producto.fabricante, "");
    producto.estado = BAJA;
    return producto;
}

void sProducto_AltaProducto(sProducto productos[], int cantidad)
{
    int indiceLibre = sProducto_BuscarEspacioLibre(productos, cantidad);
    sProducto auxiliar;
    if(indiceLibre != -1)
    {
        auxiliar = sProducto_CargarProductoConId();
        if(Confirmar("Desea confirmar el alta de este producto) s/n", 's', 'n'))
        {
            productos[indiceLibre] = auxiliar;
        }
    }
    else
    {
        printf("Error: No hay espacio disponible en el listado");
    }
}

int sProducto_BuscarEspacioLibre(sProducto productos[], int cantidad)
{
    int indiceLibre = -1;
    for(int i=0;i<cantidad;i++)
    {
        if(productos[i].estado == BAJA)
        {
            indiceLibre = i;
            break;
        }
    }
    return indiceLibre;
}

sProducto sProducto_CargarProductoConId()
{
    sProducto nuevoProducto = sProducto_CargarProductoSinId();
    nuevoProducto.idProducto = ++ultimoId; //Primero incrementa el valor, luego lo obtiene. Devuelve 1
                              //ultimoId++ //Primero obtiene el valor, luego lo incrementa. Devuelve 0
    return nuevoProducto;
}

sProducto sProducto_CargarProductoSinId()
{
    sProducto nuevoProducto;

    fflush(stdin);
    printf("Ingrese la descripcion del producto: ");
    //char *fgets(char *str, int n, FILE *stream)
    fgets(nuevoProducto.descripcion, TAMANIO_STRING, stdin);
    fflush(stdin);
    printf("Ingrese el nombre del fabricante del producto: ");
    fgets(nuevoProducto.fabricante, TAMANIO_STRING, stdin);
    printf("Ingrese el precio del producto: ");
    scanf("%f", &nuevoProducto.precio);
    nuevoProducto.estado = ALTA;

    return nuevoProducto;
}

int MostrarProducto (sProducto producto)
{
    if(producto.estado == ALTA)
    {
        printf("\n%d, %s, %s, %.2f", producto.idProducto, producto.descripcion, producto.fabricante, producto.precio);
        return 1;
    }
    return 0;
}

int MostrarTodosLosProductos(sProducto productos[], int cantidad)
{
    int cantidadProductosMostrados = 0;
    printf("%s %s %s %s", "ID Producto", "Descripcion", "Fabricante", "Precio");
    for(int i=0;i<cantidad;i++)
    {
        cantidadProductosMostrados += MostrarProducto(productos[i]);
        //cantidadProductosMostrados = cantidadProductosMostrados + MostrarProducto(productos[i]);
    }
    return cantidadProductosMostrados;
}

void ModificarProducto(sProducto productos[], int cantidad)
{
    int idProducto;
    int indiceProducto;
    sProducto auxiliar;

    MostrarTodosLosProductos(productos, cantidad);
    printf("Ingrese el ID del producto que desea modificar: ");
    scanf("%d", &idProducto);
    indiceProducto = BuscarProductoPorID(productos, cantidad, idProducto);
    if(indiceProducto > -1)
    {
        auxiliar = sProducto_CargarProductoSinId();
        printf("\nProducto original: ");
        MostrarProducto(productos[indiceProducto]);
        printf("\nProducto modificado: ");
        MostrarProducto(auxiliar);
        if(Confirmar("Desea confirmar la modificacion? s/n", 's', 'n'))
        {
            productos[indiceProducto] = auxiliar;
        }
    }
    else
    {
        printf("\nError: No se encontro el producto deseado");
    }

}

int BuscarProductoPorID(sProducto productos[], int cantidad, int idProducto)
{
    int indiceProducto = -1;
    for(int i=0;i<cantidad;i++)
    {
        if(productos[i].idProducto == idProducto && productos[i].estado == ALTA)
        {
            indiceProducto = i;
            break;
        }
    }
    return indiceProducto;
}

int BajaProducto(sProducto productos[], int cantidad)
{
    int indiceProducto;
    int idProducto;

    MostrarTodosLosProductos(productos, cantidad);
    printf("Ingrese el ID del producto que desea modificar: ");
    scanf("%d", &idProducto);
    indiceProducto = BuscarProductoPorID(productos, cantidad, idProducto);
    if(indiceProducto > -1)
    {
        MostrarProducto(productos[indiceProducto]);
        if(Confirmar("Desea confirmar la baja de este producto? s/n", 's', 'n'))
        {
            productos[indiceProducto].estado = BAJA;
        }
    }
    return indiceProducto;
}

int FiltrarPorPrecio(sProducto productos[], int cantidad, float precioMaximo)
{
    int cantidadProductosMostrados = 0;
    // sProducto productosFiltrados[cantidad];
    //sProducto_InicializarArrayProductos(productosFiltrados, cantidad);
    for(int i=0;i<cantidad;i++)
    {
        if(productos[i].precio < precioMaximo && productos[i].estado == ALTA)
        {
            MostrarProducto(productos[i]); //Mostrar el producto
            // productosFiltrados[cantidadProductos] = productos[i];
            cantidadProductosMostrados++;
        }
    }
    return cantidadProductosMostrados;
}
