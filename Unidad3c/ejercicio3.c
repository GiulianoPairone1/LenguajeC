#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i;
    int x = 1;
    int cont;
    int num;
    cont = 0;
    num = 0;
    while (x <= 10)
    {
        printf("Mostrar ingrese un numero \n");
        scanf("%d",&num);
        if (num > 0)
        {
            cont = cont + num;
            num = 0;
            x = x +1;
        }
        else
        {
            printf("EL valor no es valido\n");
        }
        
    }
    printf("La suma total de los 10 numeros es : %d\n" , cont);
    system("Pause");
  
}