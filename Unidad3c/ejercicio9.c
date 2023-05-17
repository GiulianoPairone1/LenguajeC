#include<stdio.h>
#include<stdlib.h>
int main()
{
    int dni = 35654123;
    int pass = 1234;
    int saldo = 150000;
    int cbu= 986323456;
    int dniIngresado = 0;
    int passIngresado=0;
    int intentos = 1;
    int ingresadoCorrectamente = 0;
    char Letra;
    printf("Ingrese su numero de documento y contraseña\n");
    scanf("%d",&dniIngresado);
    scanf("%d",&passIngresado);
    while (intentos < 4)
    {
        if (dniIngresado = dni)
        {
            if (passIngresado = pass)
            {
                printf("Seleccione una Opcion\n");
                printf("A.Saldo\n");
                printf("B. CBU\n");
                printf("C.Salir\n");
                switch (Letra)
                {
                case 'A':
                    printf("El monto de su cuenta es: %d\n " , saldo);
                    break;
                case 'B':
                    printf("Su CBU es: %d\n", cbu);
                    break;
                case 'C':
                    printf("Saliendo\n");
                    intentos = 3;     
                default:
                    break;
                }              
            }
            else
            {
                printf("Contraseña Incorrecta\n");
                intentos = intentos +1;
            }
        }
        else
        {
            printf("Numero de documento incorrecto \n");
            intentos = intentos +1;            
        }    
    }  
    printf("Secion finalizada\n");  
        
}