#include <stdio.h>
int main ()
{
    int lad1;
    int lad2;
    int lad3;
    int lad4;
    int diag; 
    int super;
    int per;
    printf("Ingrese el lado numero 1 \n");
    scanf("%d",&lad1);
    printf("Ingrese el lado numero 2 \n");
    scanf("%d",&lad2);
    printf("Ingrese el lado numero 3 \n");
    scanf("%d",&lad3);
    printf("Ingrese el lado numero 4 \n");
    scanf("%d",&lad4);
    diag= ((lad1*lad1)+(lad2*lad2))/2;
    super= lad1* lad2;
    per= 2 * (lad1 + lad2);
    printf("El valor de la diagonal es ");
    }