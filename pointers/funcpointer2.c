#include<stdio.h>

// int demo(){

//     int a[]={1,2,3,4,5};
//     return a;

// }

int* demo(){

    static int a[]={1,2,3,4,5};
    printf("\n address of a = %d",&a);
    return a;

}
void main()
{
   
    int *x,i;
    
    x = demo();
    printf("\n address of x = %d",x);
    for(i=0;i<5;i++){
        printf("\n %d",x[i]);
    }
}