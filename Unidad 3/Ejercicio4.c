#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n1;
    int n2;
    int n3;
    printf("Ingrese 3 numeros\n");
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
    if (n1>n2 & n1>n3)
    {
        printf("El numero mayor es: %d\n", n1);
    }
    else if (n2>n1 & n2>n3)
    {
        printf("El numero mayor es : %d\n", n2);
    }
    else
    {
        printf("El numero mayor es : %d\n", n3);
    }
}