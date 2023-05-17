#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n1;
    int des;
    printf("Ingrese el valor de la venta\n");
    scanf("%d",&n1);
    if (n1>0)
    {
        if (n1 >=100000)
        {
           des = n1*0.15;
           printf("El monto a pagar es : %d\n",des);
        }
        else
        {
            des= n1*0.10;
            printf("El monto a pagar es : %d\n", des);
        }
        
    }
    else
    {
        printf("El monto de la venta es incorrecto");
    }
}