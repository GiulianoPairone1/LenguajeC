#include<stdio.h>
int main(){
    int n1;
    int n2;
    int sum;
    int pro;
    int res;
    printf("Ingrese el primer numer\n");
    scanf("%d",&n1);
    printf("Ingre el segundo numero\n");
    scanf("%d",&n2);
    /*Se calcula la suma*/
    sum= n1 +n2;
    /*Se calcula el producto*/
    pro= n1 * n2;
    /*Se calcula la resta*/
    res= n1 - n2 ;
    printf("El resultado de la suma es :%d\n",sum,"); y el valor de la resta: %d\n",res);
    printf("El valor del producto :%d\n",pro );
    printf("El valor de la resta: %d\n",res);
}