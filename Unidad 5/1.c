#include <stdio.h>
#include <stdlib.h>
//El siguiente código abre un archivo llamado "ejemplo1.txt" en modo lectura y
//lee dentro de él
void main ()
{
  FILE *fp;
  char texto[100];
 
  fp = fopen("ejemplo1.txt", "r"); //abrimos el archivo, en modo lectura
  fscanf(fp, "%s", texto); //leemos el texto hasta un espacio y
  //lo almacenamos en el array texto
  printf("La primer palabra del archivo es: \n");
  printf("%s \n",texto);//imprimimos en consola lo almacenado en el array texto
  fclose (fp); //cerramos el archivo
  system("pause");
}