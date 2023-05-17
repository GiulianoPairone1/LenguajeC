#include<stdio.h>
#include<stdlib.h>
int main()
{
    float n1;
    float n2;
    float suma;
    float resta1;
    float resta2;
    float mult;
    float div1;
    int sal;
    char letra;
    int cont;
    float div2;
    sal = 0;
    cont = 0;
    printf("Ingrese dos numeros reales\n");
    scanf("%f",&n1);
    scanf("%f",&n2);
    while (sal < 1)     
    {
        printf("Seleccione una opcion:\n");
        printf("A.Informar suma\n");
        printf("B. Unformar resta\n");
        printf("C. Informar multiplicacion\n");
        printf("D. Informar division\n");
        printf("E. Cantidad de operaciones\n");
        printf("F. Salir");
        scanf("%c",&letra);
        switch (letra)
        {
        case 'A':
            suma = n1 + n2 ;
            cont = cont + 1;
            printf("El resultado de la suma es: %f\b" , suma);
            break;
        case 'B':
            resta1 = n1 - n2;
            resta2 = n2 - n1;
            cont = cont + 2 ;
            printf ("El resultaddo de hacer %f menos %f es: %f\n" , n1,n2,resta1);
            printf("El resultado de hacer %f menos %f es: %f\n" , n2,n1,resta2);
            break;
        case 'C':
            mult = n1 * n2 ;
            cont = cont + 1;
            printf("El resultado de la multiplicacion es: %f\n" , mult);
            break;
        case 'D':
            div1 = n1/n2;
            div2 = n2/n1;
            cont = cont + 2;
            printf("El resultado de la divicion entre %f y %f es: %f\n" , n1,n2,div1);
            printf("El resultado de la division %f y %f es: %f\n" ,n2,n1, div2 );
            break;
        case 'E':
            printf("El total de las operaciones realizadas es: %f\n" , cont);
            break;
        case 'F' :
            printf("Saliendo\n");
            sal = 1;
        default:
            break;
        }      
    }    
}