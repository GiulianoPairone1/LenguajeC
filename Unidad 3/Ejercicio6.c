#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n1;
    printf("Ingrese su nota\n");
    scanf("%d",&n1);
    if (n1<10 & n1>0)
    {
        if (n1>=6)
        {
            printf("Usted Promociono la materia");
        }
        else if (n1>=4)
        {
            printf("Usted regularizo la materia");
        }
        else 
         {
            printf("Usted no regularizo la materia");
        }
        
    }
    else
    {
        printf("Ingrese una nota valida");
    }
    
}