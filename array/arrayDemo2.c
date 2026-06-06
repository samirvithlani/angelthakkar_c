#include<stdio.h>

void main(){

    int i,a[5];
    for(i=0;i<5;i++){
        printf("\n please enter value of %d index",i);
        scanf("%d",&a[i]);
    }

    for(i=0;i<5;i++){

        printf("\n i = %d",a[i]);
    }


}