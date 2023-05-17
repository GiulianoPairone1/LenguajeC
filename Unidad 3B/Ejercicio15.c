#include<stdio.h>
#include<stdlib.h>
int main()
{
    int con1;
    int not1;
    int not2;
    int not3;
    int alumn;
    int i;
    printf("Ingrese a continuacion el legajo del alumno y las 3 notas\n");
    for ( i =1 ; i <6; i++)
    {
        printf("Ingrese el numero de legajo\n");
        scanf("%d",&alumn);
        printf("Ingrese la primera nota\n");
        scanf("%d",&not1);
        printf("Ingrese la segunda nota\n");
        scanf("%d",&not2);
        printf("Ingrese la tercera nota\n");
        scanf("%d",&not3);
        con1 = (not1 + not2 + not3) / 3;
        printf("El numero del alumno es %d y su promedio es: %d\n", i,con1);
        con1= 0;
    }
    
}