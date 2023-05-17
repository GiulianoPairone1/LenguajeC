#include <stdio.h>
#include <stdlib.h>

int dnis[130];
char nombres[130][50];
int horasTrabajadas[130];
int categorias[130];

int precioHoraPlanta = 2000;
int precioHoraAdministrativo = 1500;
int precioHoraVendedor = 1000;

const int tam = 130;

void cargarEmpleados();
void mostrarEmpleados();
void mostrarEmpleadosCantHsMayor();

void main()
{
    int opcion = 0;  
    
        do
        {
            printf("\n1- Cargar empleados.");
            printf("\n2- Mostrar empleados.");
            printf("\n3- Mostrar empleados con cantidad de horas trabajadas mayor o igual que 20.");
            printf("\n4- Salir.\n\n");
            scanf("%d", &opcion);

            if(opcion != 4)
            {
                switch(opcion)
                {
                     case 1: 
                        //Cargar empleados
                        cargarEmpleados();

                        break;
                    case 2: 
                        //Mostrar empleados
                        mostrarEmpleados();                 
                        break;
                    case 3: 
                        //Mostrar empleados con cantidad de horas trabajadas mayor o igual que 20
                        mostrarEmpleadosCantHsMayor();

                        break;
                    default:
                        printf("La opci%cn ingresada es inv%clida\n", 162, 160);
                        break;
                }  
            }
        } while (opcion !=4);
        
       

    

    system("pause");
}

void cargarEmpleados()
{
    for(int i = 0; i < tam; i++)
    {
       do
       {
          printf("%cngrese el n%cmero de documento: \n",214,163);
          scanf("%d",&dnis[i]);
          if (dnis[i]<1000000 && dnis[i>99999999])
          {
             printf("El DNI no es correcto, trate nuevamente\n");
          }
         
       } while (dnis[i]<1000000 && dnis[i>99999999] );
       printf("%cngrese el primer nombre del empleado: \n",214);
       scanf("%s",&nombres[i]);
       do
       {
          printf("%cngrese el total de horas trabajadas: \n",214);
          scanf("%d",&horasTrabajadas[i]);
          if (horasTrabajadas[i]<1)
          {
             printf("La cantidad de horas , no es valida\n");
          }
         
       } while (horasTrabajadas[i]<1);
       do
       {
          printf("%cngrese la categoria siendo: \n", 214);
          printf("1-Planta\n");
          printf("2-administrativo\n");
          printf("3-Vendedor\n");
          scanf("%d",&categorias[i]);
          if (categorias[i]< 1 && categorias[i]>3)
          {
              printf("Categoria incorrecta\n");
          }
         
       } while (categorias[i]<1 && categorias[i]>3);
    }
}

void mostrarEmpleados()
{
    for(int i = 0; i < tam; i++)
    {
        printf(" %d \t", dnis[i]);
        printf(" %s \t", nombres[i]);
        printf(" %d hs \t", horasTrabajadas[i]);
        switch(categorias[i])
        {
            case 1:
                printf("Planta");
                break;
            case 2:
                printf("Administrativo");
                break;
            case 3:
                printf("Vendedor");
                break;
            default:
                printf("Categoria inv%clida\n", 160);
        }
        printf("\n");
    }
}

void mostrarEmpleadosCantHsMayor()
{
    int i;
    int sueldo;
    sueldo = 0;
    for ( i = 0; i < tam; i++)
    {
        if (horasTrabajadas[i]>=20)
        {
            
            if (categorias[i] == 1)
            {
               sueldo = horasTrabajadas[i] * precioHoraPlanta; 
            }
            if (categorias[i ] == 2)
            {
                sueldo = horasTrabajadas[i] * precioHoraAdministrativo;
            }
            else
            {
                sueldo = horasTrabajadas[i] * precioHoraVendedor;
            }
            printf("El %d del empleado %s , trabajo %d y el sueldo es %d \n",dnis[i],nombres[i],horasTrabajadas[i],sueldo);
            sueldo=0;
            
        } 
        
    }
    
   
}