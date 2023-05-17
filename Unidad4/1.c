#include<stdio.h>
#include<stdlib.h>
float sumar(float num1, float num2);
float resta(float num1, float num2);
float multiplicacion(float num1, float num2);
float division(float num1, float num2);
int main()
{
    float numer1, numer2 , resultado;
    resultado = 0;
    printf("Ingrese un numero\n");
    scanf("%f", &numer1);
    printf("Ingrese un numero\n");
    scanf("%f",&numer2);

    resultado = sumar(numer1,numer2);
    printf("La suma es: %f\n", resultado);
    resultado = 0;
    resultado = resta(numer1,numer2);
    printf("La resta es: %f\n", resultado);
    resultado = 0;
    resultado = multiplicacion(numer1,numer2);
    printf("La multiplicacion es: %f\n", resultado);
    resultado = 0;
    resultado = division(numer1,numer2);
    printf("La division es: %f\n", resultado);
    system("pause");
    return 0;
}
float sumar(float num1, float num2)
{
    float respuesta;
    respuesta = num1 + num2;
    return respuesta;
}
float resta(float num1, float num2)
{
    float respuesta;
    respuesta = num1 - num2;
    return respuesta;
}
float multiplicacion(float num1, float num2)
{
    float respuesta;
    respuesta = num1 * num2;
    return respuesta;
}
float division(float num1, float num2)
{
    float respuesta;
    respuesta = num1 / num2;
    return respuesta;
}