#include<stdio.h>
#include<stdlib.h>
int main()
{
  char ALUM[10][3];
  int i;
  char letra = 'a' ;
  char letra = 'b' ;
  char letra = 'c' ;
  char letra = 'd' ;
  char letra = 'e' ;
  printf("Seleccione una opcion : \n");
  printf("A.Cargar Alumnos");
  printf("B.buscar un Alumno");
  printf("C.Modificar la nota de un alumno");
  printf("D.Mostrar un listado de los 10 alumnos");
  printf("E.salir");
 do
 {
     scanf("%c",&letra);
     if (letra = "a" , letra = "b" , letra = "c" ,letra = "d" )
     {
         switch (letra)
         {
         case '1':
             for ( i = 0; i < 9; i++)
             {
                 
                 printf("Ingrese el nombre del alumno\n");
                 scanf("%c",& ALUM[i][1]);
                 printf("Ingrese el numero de documento\n");
                 scanf("%c",&ALUM[i][2]);
                 if (ALUM[i][2]>1000000 & ALUM[i][2]<99999999)
                 {
                     printf("Documento correcto\n");
                 }
                 else
                 {
                     printf("Ingrese nuevamente el documento\n");
                     scanf("%c", &ALUM[i][2]);
                 }
                 printf("Ingrese la nota del alumno\n");
                 scanf("%c",&ALUM[i][3]);
                 if (ALUM[i][3]>0 & ALUM[i][3]<11)
                 {
                     printf("Nota correcta\n");
                 }
                 else
                 {
                     printf("Ingrese nuevamente la nota\n");
                     scanf("%c",&ALUM[i][3]);
                 }
                 

             }
             
             break;            
         case '2':
             printf("Ingrese el nombre del alumno a buscar\n");
             break;
         case '3':
             printf("Ingrese el alumno , al cual le desea realizar el cambio de nota\n");
             break;
         case '4':
             for ( i = 0; i < 9; i++)
             {
                 printf ("El nombre del alumno es %c , el numero de documento es %c y la nota del mismo es %c \n" , ALUM[i][1] ,ALUM[i][2] , ALUM[i][3]);
             }
             
             break;
         case '5':
             printf("Saliendo\n");
             break; 
         default:
             break;
         }     
     }
     else
     {
         printf("Opcion no valida\n");
     }
     
 } while (letra = "e");
 
}