#include <stdio.h>
int main()
{
    int lad1;
    int lad2;
    int hip;
    int per;
    int super;
    printf("Ingrese el lado numero 1 \n");
    scanf("%d" ,&lad1);
    printf("ingrese el lado numero 2 \n");
    scanf("%d",&lad2);
    hip= ((lad1*lad1)+(lad2*lad2))/2;
    per= lad1 + lad2 + hip ;
    super= (lad1 * lad2)/2;
    printf("El valor de la hipotenusa es :%d\n",hip);
    printf("El valor del perimetro es :%d\n",per);
    printf("El valor de la superficie es :%d\n",super);
    }