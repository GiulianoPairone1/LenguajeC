#include <stdio.h>
int main() {
    int num1;
    int num2;
    int num3;
    int resultado;
    printf("Ingrese el primer numero\n");
    scanf("%d",&num1);
    printf("Ingrese el segundo numero\n");
    scanf("%d",&num2);
    printf("Ingrese el tercer numero\n");
    scanf("%d",&num3);
    resultado = num1 + num2 + num3 ;
    printf("El rsultado es:%d\n ",resultado);
    system("pause");
    return 0;
}