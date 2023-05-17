#include<stdio.h>
#include<stdlib.h>

int main()
{
    int veh, pas, hor,auth;

    printf("Ingrese alguna de las siguientes opcines:\n");
    printf("[1]- Para Autom%cviles\n",162);
    printf("[2]- Para Camiones\n");
    printf("[3]- Para Motos\n");
    scanf("%d",&veh);

    if (veh>0 && veh<4)
    {
        switch (veh)
        {
        case 1:
            printf("Ingrese la hora: \n");
            printf("[1] - Para Horas de ALTA  \n");
            printf("[2] - Para Horas de BAJA  \n");
            scanf ("%d",&hor);
            if (hor>0 && hor<3)
            {
                switch (hor)
                {
                 case 1 :
                    printf("Ingrese el total de pasajeros\n");
                    scanf ("%d", &auth);
                    if (auth>=3)
                    {
                        printf("No debe abonar\n");
                    }
                    else
                    {
                        printf("Debe abonar $150\n");
                    }
                    break;
                 case 2 :            
                    printf("Los autom%cviles abonan $150 sin importar el n%cmero de pasajeros \n", 162,163);     
                    break; 
                //    system("Pause");                  
                }
            }
            break;
        case 2 :
            printf("Ingrese la hora:\n");
            printf("[1] - Para Horas de ALTA\n");
            printf("[2] - Para Horas de BAJA\n");
            scanf ("%d",&hor);
            if (hor>0 && hor<3)
            {
                switch (hor)
                {
                case 1 :
                    printf("Debe abonar $300\n");
                    break;
                case 2 :       
                    printf("Debe abonar $200\n");
                    break;                
                }
            }
            break;
        case 3 :
            printf("Ingrese la hora:\n");
            printf("[1] - Para Horas de ALTA\n");
            printf("[2] - Para Horas de BAJA\n");
            scanf ("%d",&hor);
            if (hor>0 && hor<3)
            {
                switch (hor)
                {
                case 1 :
                    printf("Debe abonar $150\n");
                    break;
                case 2 :            
                    printf("No debe abonar\n");
                    break;                
                }
            }
            break;
        }    
    }else
    {
        printf("Debe ingresar un tipo de veh%cculo v%clido \n",161, 160);
    }
    system("Pause");
}