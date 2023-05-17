#include<stdio.h>
#include<stdlib.h>
int main()
{
    int sum;
    int i;
    sum=0;
    printf("A continuancion se mostrta el listado de los primeros 20 numeros impares y el resultado de la suma entre los mismos\n");
    for (i=1 ; i<=40 ; i++)
    {
        if (i %2 !=0)
        {
            printf("%d",i);
            printf("\n");
            sum = sum + i;
        }
    }
    printf("La sumas de todos los numero es: %d\n", sum);
}