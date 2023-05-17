#include<stdio.h>
#include<stdlib.h>
int main()
{
    int doc;
    int venta;
    char letra ;
    int op1;
    int op2;
    int recargo;
    
    printf("Ingrese valor de venta\n");
    scanf("%d",&venta);
    printf("Ingrese su numero de documento\n");
    scanf("%d",&doc);
    if (doc>1000000 & doc<99999999);
    {
         printf("Ingrese una opcion de pago\n");
         printf("a- Efectivo\n");
         printf("b- Tarjeta\n");
         scanf ("%c",&letra);
         printf("Valor letra: %c\n" , letra);
          switch (letra)
          {
          case 'a':
                 printf("DNI: %d\n" , doc );
                 printf("Medio de pago: Efectivo");
                  printf("Cantidad de cuotas: 1");
                 printf("Total: %d\n" , venta);
                 break;
              break;
          case 'b':                  
                 printf("Seleccione la tarjeta a utilizar");
                 printf("1_Visa");
                 printf("2_American express");
                 printf("3_Mercado Pago");
                 printf("4_Cabal");
                 scanf("%d",op1);
                 switch (op1)
                 {
                 case '1':
                     printf("Seleccione la canttidad de cuotas\n");
                     printf("5-Una cuota");
                     printf("6-Tres cuotas");
                     printf("7. Seis cuotas");
                     printf("8- Doce cuotas");
                     scanf("%d",&op2);
                     switch (op2 )
                     {
                     case '5':
                         printf("DNI: %d\n" , doc );
                         printf("Medio de pago: Tarjeta");
                         printf("Tarjeta: Visa" );
                         printf("Cantidad de cuotas: 1");
                         printf("Total: %d\n" , venta);
                         break;
                     case '6':
                         recargo = (venta * 0.04)+ venta;
                         printf("DNI: %d\n" , doc );
                         printf("Medio de pago: Tarjeta");
                         printf("Tarjeta: Visa" );
                         printf("Cantidad de cuotas: 1");
                         printf("Total: %d\n" , recargo);
                         break;
                      case '7':
                         recargo = (venta * 0.08)+ venta;
                         printf("DNI: %d\n" , doc );
                         printf("Medio de pago: Tarjeta");
                         printf("Tarjeta: Visa" );
                         printf("Cantidad de cuotas: 1");
                         printf("Total: %d\n" , recargo);
                         break;
                     case '8':
                         recargo = (venta * 0.08)+ venta;
                         printf("DNI: %d\n" , doc );
                         printf("Medio de pago: Tarjeta");
                         printf("Tarjeta: Visa" );
                         printf("Cantidad de cuotas: 1");
                         printf("Total: %d\n" , recargo);
                         break;
                     default:
                        printf("Cuotas no validas");
                        break;
                     }

                     break;
                 case '2': 
                     printf("Seleccione la canttidad de cuotas\n");
                     printf("5-Una cuota");
                     printf("6-Tres cuotas");
                     printf("7. Seis cuotas");
                     printf("8- Doce cuotas");
                     scanf("%d",&op2);
                     switch (op2 )
                     {
                     case '5':
                         printf("DNI: %d\n" , doc );
                         printf("Medio de pago: Tarjeta");
                         printf("Tarjeta: Visa" );
                         printf("Cantidad de cuotas: 1");
                         printf("Total: %d\n" , venta);
                         break;
                     case '6':
                         recargo = (venta * 0.04)+ venta;
                         printf("DNI: %d\n" , doc );
                         printf("Medio de pago: Tarjeta");
                         printf("Tarjeta: Visa" );
                         printf("Cantidad de cuotas: 1");
                         printf("Total: %d\n" , recargo);
                         break;
                      case '7':
                         recargo = (venta * 0.08)+ venta;
                         printf("DNI: %d\n" , doc );
                         printf("Medio de pago: Tarjeta");
                         printf("Tarjeta: Visa" );
                         printf("Cantidad de cuotas: 1");
                         printf("Total: %d\n" , recargo);
                         break;
                     case '8':
                         recargo = (venta * 0.08)+ venta;
                         printf("DNI: %d\n" , doc );
                         printf("Medio de pago: Tarjeta");
                         printf("Tarjeta: Visa" );
                         printf("Cantidad de cuotas: 1");
                         printf("Total: %d\n" , recargo);
                         break;
                     default:
                        printf("Cuotas no validas");
                        break;
                     }   
                 case '3':
                     printf("Seleccione la canttidad de cuotas\n");
                     printf("5-Una cuota");
                     printf("6-Tres cuotas");
                     printf("7. Seis cuotas");
                     printf("8- Doce cuotas");
                     scanf("%d",&op2);
                     switch (op2 )
                     {
                     case '5':
                         printf("DNI: %d\n" , doc );
                         printf("Medio de pago: Tarjeta");
                         printf("Tarjeta: Visa" );
                         printf("Cantidad de cuotas: 1");
                         printf("Total: %d\n" , venta);
                         break;
                     case '6':
                         recargo = (venta * 0.04)+ venta;
                         printf("DNI: %d\n" , doc );
                         printf("Medio de pago: Tarjeta");
                         printf("Tarjeta: Visa" );
                         printf("Cantidad de cuotas: 1");
                         printf("Total: %d\n" , recargo);
                         break;
                      case '7':
                         recargo = (venta * 0.08)+ venta;
                         printf("DNI: %d\n" , doc );
                         printf("Medio de pago: Tarjeta");
                         printf("Tarjeta: Visa" );
                         printf("Cantidad de cuotas: 1");
                         printf("Total: %d\n" , recargo);
                         break;
                     case '8':
                         recargo = (venta * 0.08)+ venta;
                         printf("DNI: %d\n" , doc );
                         printf("Medio de pago: Tarjeta");
                         printf("Tarjeta: Visa" );
                         printf("Cantidad de cuotas: 1");
                         printf("Total: %d\n" , recargo);
                         break;
                     default:
                        printf("Cuotas no validas");
                        break;
                     }
                 case '4':
                     printf("Seleccione la canttidad de cuotas\n");
                     printf("5-Una cuota");
                     printf("6-Tres cuotas");
                     printf("7. Seis cuotas");
                     printf("8- Doce cuotas");
                     scanf("%d",&op2);
                     switch (op2 )
                     {
                     case '5':
                         printf("DNI: %d\n" , doc );
                         printf("Medio de pago: Tarjeta");
                         printf("Tarjeta: Visa" );
                         printf("Cantidad de cuotas: 1");
                         printf("Total: %d\n" , venta);
                         break;
                     case '6':
                         recargo = (venta * 0.04)+ venta;
                         printf("DNI: %d\n" , doc );
                         printf("Medio de pago: Tarjeta");
                         printf("Tarjeta: Visa" );
                         printf("Cantidad de cuotas: 1");
                         printf("Total: %d\n" , recargo);
                         break;
                      case '7':
                         recargo = (venta * 0.08)+ venta;
                         printf("DNI: %d\n" , doc );
                         printf("Medio de pago: Tarjeta");
                         printf("Tarjeta: Visa" );
                         printf("Cantidad de cuotas: 1");
                         printf("Total: %d\n" , recargo);
                         break;
                     case '8':
                         recargo = (venta * 0.08)+ venta;
                         printf("DNI: %d\n" , doc );
                         printf("Medio de pago: Tarjeta");
                         printf("Tarjeta: Visa" );
                         printf("Cantidad de cuotas: 1");
                         printf("Total: %d\n" , recargo);
                         break;
                     default:
                        printf("Cuotas no validas");
                        break;   
                     }
              break;
             }
          
              
        }

            
    } 
}