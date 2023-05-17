#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i;
    int sum;
    sum = 0;
    for (i=1;i <= 10; i++)
    {
        printf("%d",i);
        sum= sum + i; 
        i= i+1;
        printf("-");
    }
    printf ("La suma total de los numero impares es : %d" , sum);
    
}