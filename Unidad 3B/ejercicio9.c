#include<stdio.h>
#include<stdlib.h>
int main()
{
    int sum;
    int i;
    int k;
    sum = 0;
    printf("Se mostrara a continuacion las tablas del numero 1 al 9\n");
    for ( i = 1; i <= 9; i++)
    {
        printf("Tabla del numero: %d\n" ,i);
        for ( k = 1; k <=10; k++)
        {
            sum = i * k;
            printf("El numero %d multiplicado por %d es: %d\n", i,k,sum);
        }
        
    }
    system("pause");
}