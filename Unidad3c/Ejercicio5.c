#include<stdio.h>
#include<stdlib.h>
int main()
{
    int dni = 38632584;
    float nota = 7;
    int dniIngresado = 0;
    int intentos = 1 ;
    int ingresadocorrectamente = 0;
    printf("Ingrese su numero de documento\n");   
    do
    {

        scanf("%d",&dniIngresado);
        if (dniIngresado == dni)
        {
           printf("La nota del alumno es: %f\n", nota);  
           ingresadocorrectamente = 1;          
        }
        else
        {
            printf("DNI no valido\n");
            intentos = intentos +1;
            if (intentos == 3)
            {
                printf("Llego al maximo de intentos\n");
            }
            
        }
        
    } while (intentos < 4 , ingresadocorrectamente =1);
    system("Pause");
}
