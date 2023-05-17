// Milton Maurenci , Giuliano Pairone
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char descripcion [100][100];
    int codigo[100];
    int cantidad[100];
    int op=0;
    int i = 0;
    int co;
    int cer=0;
    do
    {
        printf("Ingrese una opcion\n");
        printf("1.Cargar productos\n");
        printf("2.Modificar Stock\n");
        printf("3.Mostrar productos sin stock\n");
        printf("4.Lista de productos\n");
        printf("5.Salir\n");
        scanf("%d",&op);
        if (op>0 & op<6)
        {
            switch (op)
            {
            case '1':
                for ( i = 0; i <100; i++)
                {
                    printf("Ingrese el codigo de barras del producto: \n");
                    scanf ("%d",&codigo[i]);
                    printf("Agregue la descripcion del producto: \n");
                    scanf("%s",&descripcion[i][100]);
                    printf("Ingrese la cantidad el stock\n");
                    scanf("%d",cantidad[i]);                                                                               
                }                
                break;
            case '2':
                printf("Ingrese el codigo de barras del producto a modificar\n");
                scanf("%d",co);
                for ( i = 0; i < 100; i++)
                {
                    if (co == codigo[i])
                    {
                        printf("Ingrese el nuevo stock\n");
                        scanf ("%d",&codigo[i]);                        
                    }
                    if (i == 100)
                    {
                        printf("No se encuentra el codigo de barras indicado\n");
                    }
                                                           
                                        
                }
                break;
            case  '3':
                for ( i = 0; i <100 ; i++)
                {
                    if (cantidad[i] == cer)
                    {
                        printf("No hay stock del producto %s \n", descripcion[i]);
                        
                    }
                    
                }  
                break;
            case  '4': 
                printf("Listado de productos con su stock: \n");
                for ( i = 0; i < 100; i++)
                {
                    printf("Producto: %s , Stock: %d \n",descripcion[i],cantidad[i]);
                }                
                break;            
            
            default:
                break;
            }
        }
        
    } while (op!=5);
    
}