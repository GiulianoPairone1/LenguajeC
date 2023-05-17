#include<stdio.h>
#include<stdlib.h>
int main()
{
    int saldo;
    int retirar;
    int total;
    saldo = 50000;
    printf("Su saldo disponible es: %d\n:", saldo);
    printf("Ingrese el monto a retirar\n");
    scanf("%d",&retirar);
    if (saldo >= retirar)
    {
        total = saldo - retirar ;
    printf("El monto retirado es %d ,el saldo disponible es %d.\n",retirar, total);
    }
    else
    {
        printf("No posee fondos suficientes");
    }
}