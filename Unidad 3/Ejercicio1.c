#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n1;
    int n2;
    int mayor;
    printf("Ingrese el primer nuemero:\n");
    scanf("%d",&n1);
    printf("Ingrese el segundo numero \n");
    scanf("%d",&n2);
    if (n1 > n2)
    {
        mayor = (n1);
    }
    else
    {
        mayor = (n2) ;
    }
    printf("El numero mayor es : %d \n",mayor);
    system("pause");
}