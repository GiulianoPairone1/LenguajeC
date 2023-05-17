#include <stdio.h>
#include <stdlib.h>

int legajos[30]={0};
char apellidos[30][50];
char nombres[30][50];
float notas[30];
const int tam = 2;

void cargarAlumnos();
void mostrarAlumnos();
void mostrarAlumnoNotaMayor();
void modificarNota();

int opcion;

void main() 
{
    int opcion = 0;
   
        do
        {
           printf("\n1- Cargar los alumnos.");
	       printf("\n2- Modificar una nota.");
	       printf("\n3- Mostrar alumno que tiene mayor nota.");
	       printf("\n4- Listado de alumnos.");
           printf("\n5- Salir.\n"); 
           scanf("%d", &opcion);           
           if (opcion!=5)
           {
               switch (opcion)
               {
                    case 1:
                        cargarAlumnos();
                        break;
                    case 2:
                        modificarNota();  
                        break;
                    case 3:
                        mostrarAlumnoNotaMayor();
                        break;
                    case 4:
                        mostrarAlumnos();
                        break;   
                    default:
                        printf("Opcion invalida\n");
                        break;              
               }
           }
       
        } while (opcion !=5);
        printf("Hasta luego!\n");         
}





void cargarAlumnos()
{
    printf("\n--Ingrese los datos de los alumnos--\n");

	for(int i = 0; i < tam; i++)
    {
        printf("NUmero de legajo del alumno: \n");        
        do
        {
            scanf("%d",&legajos[i]);
            if (legajos[i]<=100000)
            {
                printf("Legajo incorrecto , ingrese nuevmanete.\n");
            }           
        } while (legajos[i] < 100000);        
       
        printf("Apellido del alunmno: \n");
        scanf("%s",&apellidos[i]);   
        printf("Nombre del alumno: \n");	
		scanf("%s", &nombres[i]);
        printf("INgrese la nota a continuacion: \n");        
        do
        {
            scanf("%f",&notas[i]);
            if (notas[i]<1 && notas[i]>10)
            {
                printf("Nota invalida\n");
            }        
            
        } while (notas[i]<1 && notas[i]>10);
        printf("\n");                       
	}     
}
void modificarNota()
{
	int legajoMod;
    float nuevaNota;
    int encontrado = 0;
    int i;
    i = 0;
        
    do
    {
           printf("Ingrese el numero de legajo: \n");
            scanf("%d",&legajoMod);
            if (legajoMod<=100000)
            {
                printf("Legajo incorrecto , ingrese nuevmanete.\n");
            }           
    } while (legajoMod < 100000); 
    for ( i = 0; i < tam; i++)
    {
        if (legajoMod == legajos[i])
        {
            printf("Ingrese la nueva nota del alumno %s %s.\n",apellidos[i], nombres[i]);
            scanf("%f",&notas[i]);
            encontrado=1;
        }
                        
    }
    if (encontrado !=1)
    {
        printf("No se encontro el legajo\n");
    }
    
}    
void mostrarAlumnoNotaMayor()
{
	int mayor ;
    int posicion ;
    int i;
    int j;
    posicion = 0;
    mayor = notas[0];    
    for ( i = 1; i < tam ; i++)
    {
        if (notas[i]>notas[mayor])
        {
            posicion=i;
            mayor=notas[i];
        }
           
    } 
    printf("El alumno con mayor nota es: %s %s y la nota es: %d \n" , apellidos[posicion], nombres[posicion],mayor);
   
}

void mostrarAlumnos()
{
    int i;
    i=0;
    printf("\n--Listado de alumnos--\n");
    for ( i = 0; i < tam; i++)
    {
        printf(" Legajo: %d , Alumno: %s %s , Nota: %f \n", legajos[i],apellidos[i],nombres[i],notas[i]);
    }  
}