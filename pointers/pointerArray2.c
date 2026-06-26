#include<stdio.h>

void main()
{
 
    int sal  []={1000,2000,3000,4000,5000},i;
    int *p = sal;

    for(i=0;i<5;i++){
        *(p+i)+=5000;
    }
    for(i=0;i<5;i++){
        printf("\n i = %d",sal[i]);
    }

   
}