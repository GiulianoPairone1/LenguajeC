#include<stdio.h>
#include<stdlib.h>
int main()
{
    int prom;
    int cantalun;
    int cantparciales;
    int promgeneral;
    int nota;
    int i;
    int acum2;
    int x = 1;
    int acum;
    acum = 0;
    acum2 = 0;
    prom = 0;
    nota=0;
    promgeneral = 0;
    printf("Ingrese el total de alumnos del curso y luego el total de parciles tomados\n");
    scanf("%d",&cantalun);
    scanf("%d",&cantparciales);
    for ( i = 0; i <= cantalun ; i++)
    {
        while (x <= cantparciales )
        {
            printf("Ingrese la nota del parcial numero %d\n" , x);
            scanf("%d",&nota);
            if (nota<=10 & nota>= 1)
            {
              acum = acum + nota;
              nota = 0;  
              x= x + 1;
            }
            else
            {
                printf("Nota no valida\n");
            }
                        
        }
        prom = acum / cantparciales;
        acum2 = acum2 + prom;
        printf("El promedio del alumno numero %d es %d \n" , i , prom );
        prom = 0;
    }
    promgeneral = acum2 / cantalun;
    printf(" El promedio de los %d alumnos es: %d\n" , cantalun , promgeneral);
    system("Pause");


}