//integrantes Milton Maurenci , Giuliano Pairone
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int productos[3];
    char descrip[3][100];
    int cant[3];
    int cod;
    int i;
    int n=0;
    int cero;
    int op =0;
    cero = 0;


    do
    { 
        printf("Bienvenido\n");
        printf("Seleccione una opcion :\n");
        printf("1.Cargar productos\n");
        printf("2.Modificar stock\n");
        printf("3.Mostrar productos en stock\n");
        printf("4.Listar prodcutos\n");
        printf("5.Salir\n");       
        scanf("%d",&op);
        
            switch (op)
            {
            case 1:
                for ( i = 0; i < 3; i++)
                {
                    printf("Ingrese el codigo de barras del producto\n");
                    scanf ("%d",&productos[i]);
                    printf("Ingrese el nombre del mismo\n");
                    scanf("%s",&descrip[i]);
                    printf("Ingrese la cantidad del producto\n");
                    scanf("%d",&cant[i]);                                
                }                
                break;

            case 2:
                    printf("Ingrese el codigo de barras del producto a buscar\n");
                    scanf("%d",&cod);
                    for ( i = 0; i < 3; i++)
                    {
                        if (cod == productos[i] )
                        {
                            printf("Ingrese la cantidad actual del producto\n");
                            scanf("%d",&cant[i]);
                            i = 100;
                            n=1;
                        }                        
                    }
                    if (n == 0)
                    {
                        printf("Codigo de barras incorrecto\n");
                    }
                                                     
                break;

            case 3:
                     printf("A continuacion se mostrara la cantidad de productos de los cuales no haya stock\n"); 
                     for ( i = 0; i < 3; i++)
                     {
                        if (cero == cant[i])
                        {
                            printf("El producto %s no hay disponibilidad , ya que no hay stock\n" , descrip[i]);                        
                        }
                        
                     }
                break;
            case 4 :
                    for ( i = 0; i < 3; i++)
                    {
                        printf("Los electrodomesticos actuales son %s con la cantidad %d en stock\n", descrip[i],cant[i]);
                    }
                break;                             
            default:
                printf("Opcion no valida\n");
                break;
            }
    } while (op != 5);
    printf("Adios\n");
    
}