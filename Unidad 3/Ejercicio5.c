#include<stdio.h>
#include<stdlib.h>
int main()
{
   int n1;
   int par;
   int res;
   printf("Ingrese un numero para verificar si es par o impar\n");
   scanf("%d",&n1);
   par = 2 ;
   res = n1%2;
   if (res == 0)
   {
      printf("El numero es par");
   }
   else 
   {
      printf("El numero es impar");
   }
   
}