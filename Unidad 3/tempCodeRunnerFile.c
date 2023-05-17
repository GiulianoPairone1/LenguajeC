#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n1;
    int n2;
    int mayor;
    printf("Ingrese un numero\n");
    scanf ("%d",&n1);
    printf("Ingrese otro numero\n");
    scanf("%d",&n2);
    if (n1 > n2)
    {
        mayor = n1 ;
    }
    else
    {
        mayor = n2 ;
    }
    if (n1 == n2)
    {
        printf("Ambos numeros son iguales ");
    }
    printf("El numero mayor es :%d \n", mayor);
}