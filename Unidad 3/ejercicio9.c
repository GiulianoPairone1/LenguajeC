#include<stdio.h>
#include<stdlib.h>
int main()
{
    int alt;
    printf("Mostrar ingrese su altura en cm\n");
    scanf("%d",&alt);
    if (alt > 0)
    {
        if (alt <= 150)
        {
            printf("Persona de aultura por debajo de la media");
        }
        else
        {
        if (151>alt & alt<170)
        {
            printf("Persona de altura media");
        }
        else 
        {
           if (alt>171)
           {
                printf("Altura por arriba de la media");
           }
           
        }
        }
    }
    else
    {
        printf("Ingrese una altura valida");
    }
}