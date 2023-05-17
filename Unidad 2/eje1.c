#include <stdio.h>

int  main() {
    int num1;
    int num2;
    int resultado;
    printf("ingrese el primer valor\n");
    scanf("%d",&num1);
    printf("ingrese el segundo valor\n");
    scanf("%d",&num2);
    resultado = num1 + num2;
    printf(" El resultado de la suma es:%d\n",resultado);
    system("Pause") ;
    return 0;
}