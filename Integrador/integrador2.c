#include<stdio.h>
#include<stdlib.h>
int main()
{
    int dni;    int venta;    int cuota;    int total;
    int numvent; int i; int formapag;
    printf("Ingrese el total de ventas\n");
    scanf("%d",&numvent);
    for ( i = 0; i < numvent; i++)
    {
        printf("Ingrese numero de documento\n");
        scanf("%d",&dni);
        if (dni > 1000000 & dni < 99999999)
        {
            printf("Seleccione una opcion de pago:\n");
            printf("[1]-Efectivo\n");
            printf("[2]-Tarjeta\n");
            scanf("%d",&formapag);
            if (formapag>0 & formapag<3)
            {
                /* code */
            }
                      
        }
        else
        {
            printf("Ingrese un documento valido\n");
        }
    }
    

}