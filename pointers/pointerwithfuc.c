#include<stdio.h>

//no1 =10 ,no2 =20
//call by value
void swap(int no1,int no2){

    int temp;
    printf("\n no1 before swap = %d",no1); //10
    printf("\n no2 before swap = %d",no2); //20

    temp =no1;
    no1 = no2;
    no2 = temp;

    printf("\n no1 after swap = %d",no1); //20
    printf("\n no2 after swap = %d",no2); //10
 
}

void main()
{
   
    int a=10,b=20;
    printf("\n no1 before  swap call = %d",a); //10 
    printf("\n no2 before  swap call= %d",b); //20

    swap(a,b); //

    printf("\n no1 after  swap call = %d",a); //10
    printf("\n no2 after  swap call= %d",b); //20
    
}