#include<stdio.h>


int* findMax(int a[]){
    int i;
    int *topper = &a[0];
    for(i=1;i<5;i++){
        if(a[i]>*topper){
            topper = &a[i];
        }
    }
    return topper;
}

void main()
{
    
    int marks[]={100,20,34,506,78};
    int *p =findMax(marks);
    printf("\n topper = %d",*p);
   
}