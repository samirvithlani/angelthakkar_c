#include<stdio.h>

void main()
{
   
    int x=10;
    int *ptr=&x;

    printf("\n value of x = %d",x);
    printf("\n address of x = %p",&x);

    printf("\n value of ptr = %p",ptr);
    printf("\n value pointed by ptr = %d",*ptr);

    *ptr = 100;

    printf("\n value of x = %d",x);
    printf("\n address of x = %p",&x);


    
   
}   