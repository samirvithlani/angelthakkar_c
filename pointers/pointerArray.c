#include<stdio.h>

void main()
{
   
    //
   int a[]={10,20,30,40,50};
   int b[10],i;
   printf("\n address of a = %u",&a);
   printf("\n address of a = %u",&a[0]);
   printf("\n address of a = %u",&a[1]);
   printf("\n address of a = %u",&a[2]);
   printf("\n address of a = %u",&a[3]);
   printf("\n address of a = %u",&a[4]);
   int *p = a;
   printf("\n *p = %u",p);

   //traverse array

   for(i=0;i<5;i++){
    printf("\n %d",*(p+i));
   }
}