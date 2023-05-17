#include<stdio.h>
#include<stdlib.h>
int main()
{
    int venta;
    char letra;
    float limite = 1;
    float entrada = 1;
    int num;
    int sum;
    int pagar1;
    int pagar2;
    int pagar3;
    int pagar4;
    int pagar5;
    sum = 0;
    pagar1 = 0;
    pagar2 = 0;
    pagar3 = 0;
    pagar4 = 0;
    pagar5 = 0;
    num = 0;
    printf("Ingrese el codigo del vender\n");
    printf("A. Vendedor 1\n");
    printf("B. Vendedor 2\n");
    printf("C. Vendedor 3\n");
    printf("D. Vendedor 4\n");
    printf("E. Vendedor 5\n");
    scanf("%c", & letra);
    switch (letra)
    {
    case 'A':
        while (limite >0)
        {
            printf("Ingrese su venta\n");
            scanf("%d",&venta);
            if (venta>0)
            {
                sum = sum + venta;
            }
            else
            {
                printf("Ingrese una venta valida\n");
            }
            printf("Si quiere ingresar otra venta coloque 1 , en caso contrario , coloque 0\n");
            scanf("%d",&num);
            if (limite = num)
            {
                limite=1;
            }
            else
            {
                limite = 0;
            }
                        
        }
        pagar1 = (sum * 2.5)/100;   
        sum = 0;     
        break;
    case 'B':
        while (limite >0)
        {
            printf("Ingrese su venta\n");
            scanf("%d",&venta);
            if (venta>0)
            {
                sum = sum + venta;
            }
            else
            {
                printf("Ingrese una venta valida\n");
            }
            printf("Si quiere ingresar otra venta coloque 1 , en caso contrario , coloque 0\n");
            scanf("%d",&num);
            if (limite = num)
            {
                limite=1;
            }
            else
            {
                limite = 0;
            }
                        
        }
        pagar2 = (sum * 2.5)/100;
        sum = 0;         
        break;
    case 'C':
        while (limite >0)
        {
            printf("Ingrese su venta\n");
            scanf("%d",&venta);
            if (venta>0)
            {
                sum = sum + venta;
            }
            else
            {
                printf("Ingrese una venta valida\n");
            }
            printf("Si quiere ingresar otra venta coloque 1 , en caso contrario , coloque 0\n");
            scanf("%d",&num);
            if (limite = num)
            {
                limite=1;
            }
            else
            {
                limite = 0;
            }
                        
        }
        pagar3 = (sum * 2.5)/100;        
        sum = 0; 
        break; 
     case 'D':
        while (limite >0)
        {
            printf("Ingrese su venta\n");
            scanf("%d",&venta);
            if (venta>0)
            {
                sum = sum + venta;
            }
            else
            {
                printf("Ingrese una venta valida\n");
            }
            printf("Si quiere ingresar otra venta coloque 1 , en caso contrario , coloque 0\n");
            scanf("%d",&num);
            if (limite = num)
            {
                limite=1;
            }
            else
            {
                limite = 0;
            }
                        
        }
        pagar4 = (sum * 2.5)/100;
        sum = 0;         
        break;
     case 'E':
        while (limite >0)
        {
            printf("Ingrese su venta\n");
            scanf("%d",&venta);
            if (venta>0)
            {
                sum = sum + venta;
            }
            else
            {
                printf("Ingrese una venta valida\n");
            }
            printf("Si quiere ingresar otra venta coloque 1 , en caso contrario , coloque 0\n");
            scanf("%d",&num);
            if (limite = num)
            {
                limite=1;
            }
            else
            {
                limite = 0;
            }
                        
        }
        pagar5 = (sum * 2.5)/100;     
        sum = 0;    
        break;        
     default:
        break;
    }
    printf("Los montos a pagar de los vendores son :\n");
    printf("Vendedor A , monto : %d\n" , pagar1);
    printf("Vendedor B , monto : %d\n" , pagar2);
    printf("Vendedor C , monto : %d\n" , pagar3);
    printf("Vendedor D , monto : %d\n" , pagar4);
    printf("Vendedor E , monto : %d\n" , pagar5);            
}