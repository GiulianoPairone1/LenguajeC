#include <stdio.h>
#include <stdlib.h>
//El siguiente código abre un archivo llamado "ejemplo2.txt" en modo lectura /escritura y escribe dentro de él
void main ()
{
   FILE *fp;
   char texto1[100] = "Texto dentro del fichero. ";
   char texto2[100] = "Otro texto dentro del fichero.";
   fp = fopen("ejemplo2.txt", "w+"); //abre el archivo o lo crea si no existe,
   //en modo lectura/escritura
   fprintf(fp, texto1); //escribimos en el archivo el texto almacenado
   //en el array texto1
   fprintf(fp, "%s", "\n"); //escribimos en el archivo un salto de línea
   fprintf(fp, texto2); //escribimos en el archivo el texto almacenado
   //en el array texto2
   fclose (fp); //cerramos el archivo
   system("pause");
}
