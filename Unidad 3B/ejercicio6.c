#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i;
    int acum;
    int res;
    acum=0;
    for ( i = 3 ;i <=30; i= i + 3 )
    {
       printf("%d",i);
       printf("\n");
       acum = acum + i;
    }    
    printf("La suma de los numero multiplos de 3 es: %d\n", acum);
    system("Pause") ;
    return 0;  
}