#include<stdio.h>
#include<stdlib.h>
int main()
{
   int nota;
   int sum;
   int cont;
   float continuar = 1;
   int prom;
   int n;
   n= 0;
   prom = 0;
   cont= 0;
   sum = 0;
   nota = 0;
   while (continuar > 0 )
   {
       printf("Ingrese una nota\n");
       scanf("%d",&nota);
      if (nota<=10 & nota>=1)
      {
          sum = sum+ nota;
          cont = cont + 1;
          nota = 0;
      }
      else
      {
          printf("La nota ingresasada no es valida\n");
          
      }
      printf("Quiere ingresar otra nota , escriba el numero 1 , de ser contrario escriba 0?\n");
      scanf("%d",&n);
      if (continuar = n )
      {
        continuar = 1;
      }
      else
      {
          continuar = 0 ;
      }         
   }
    prom = sum / cont;
    printf("La suma total de todas las notas es %d , la cantidad de notas evaluadas es %d , por lo tanto el promedio general es %d\n" , sum , cont , prom); 
    system("Pause");
}