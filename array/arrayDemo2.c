#include<stdio.h>

void main(){

    int i,a[5];
    for(i=0;i<5;i++){
        printf("\n please enter value of %d index",i);
        scanf("%d",&a[i]);
    }

    //[100,200,30,400,50]
    //find max
    int max = a[0]; //100
    

    for(i=0;i<5;i++){

        //100 >100 =100
        //200 > 100 =
        //30 >200 =200
        //400>200 = 400
        //50>400 no => 400
        if(a[i]>max){
            max = a[i]; //200
        }
        //printf("\n i = %d",a[i]);
    }

    printf("\n maxa = %d",max);

}