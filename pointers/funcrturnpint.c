#include<stdio.h>


int* demo(){

    static int no=1000; //static 
    printf("\n address of no =%u",&no);
    return &no;
}

void main()
{
   
   int *x;
   x= demo();
   printf("\n x = %d",*x);
   *x = 999;
   printf("\n x = %d",*x);
}