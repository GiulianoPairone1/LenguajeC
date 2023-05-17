#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n1;
    int n2;
    int i;
    printf("Ingrese un numero 2 veces\n");
    scanf("%d",&n1);
    scanf("%d",&n2);
    if (n1 = n2 )
    {
        for ( i = 0; i <=10 ; i++)
        {
              n1= n1 * i;
             printf("El numero %d multiplicado por %d es igual a : %d\n", n2,i,n1);
              n1 = n2  ;
        }
        
    }    
}