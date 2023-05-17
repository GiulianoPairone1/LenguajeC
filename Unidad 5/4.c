#include<stdio.h>
#include<stdlib.h>
//Usa el archivo "DNI.tx"
void main()
{
    FILE *fp;
    int text[100];
    int dni[100];
    int cont;
    char carac[100];
    cont = 0;
    do
    {
        fp = fopen("DNI.txt","r");
        fscanf(fp,"%d", text);
        printf("Ingrese numero de documento del alumno\n");
        scanf("%d",&dni);
        if (dni == text)
        {
            printf("\n");
            while ( feof(fp) == 0)
            {
                fgets(carac,100,fp);
                printf("%s",carac);
                cont=3;
            }
            fclose(fp);        
        }
        else
        {
            printf("Dni incorrecto\n");
            cont=cont + 1;
        }
    } while (cont!=3);
    
}