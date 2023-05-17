#include <stdio.h>
#include <stdlib.h>
int main()
{
  FILE *archivo;
  char caracteres[100];
  archivo = fopen("ejemplo1.txt","r"); //abrimos el archivo, en modo lectura
  if (archivo != NULL)
  {
   printf("\nEl contenido del archivo de prueba es \n\n");
   while (feof(archivo) == 0) //Mientras no sea fin de archivo
 {
  fgets(caracteres, 100, archivo); //usamos fgets para leer cada cadena
  //del archivo. En cada iteración se
  //irá almacenando en el array caracteres
  //cada cadena del archivo
  printf("%s",caracteres);//imprimo en la consola la cadena recién leida
 }
 fclose(archivo); //cerramos el archivo
 }
 else
 {
  printf("Error al abrir el archivo.");
 }
  printf("\n");
  system("pause");
}
