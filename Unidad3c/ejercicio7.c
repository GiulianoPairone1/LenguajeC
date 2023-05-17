#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num ;
    float salir = 1;
    int cont;
    int nun;
    num = 0;
    nun = 0;
    cont= 0;

    while (salir > 0)
    {
        printf("Mostar ingrese un numero real\n");
        scanf("%d",&num); 
        if (num > 0)
        {
            cont= cont +1 ;
        }
        else
        {
            printf("Numero no valido\n");
        }
        printf("si quiere ingresar otro numero , escriba 1 , en caso contrario escriba 0\n");
        scanf("%d",&nun);
        if (salir = nun)
        {
            salir =1;
        }
        else
        {
            salir = 0;
        }
                 
    }
    printf("La cantidad de numeros que integran el comjunto es %d\n", cont);
    
}