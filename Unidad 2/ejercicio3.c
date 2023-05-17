#include <stdio.h>
int main() {
    int lad1;
    int lad2;
    int lad3;
    int perimetro;
    printf("Ingrese el lado numero 1\n");
    scanf("%d",&lad1);
    printf("Ingrese el lado numero 2\n");
    scanf("%d",&lad2);
    printf("Ingrese el lado numero 3\n");
    scanf("%d",&lad3);
    perimetro=  lad1 + lad2;
    perimetro= perimetro + lad3;
    printf("El perimetro del triangulo es :%d\n",perimetro );
}