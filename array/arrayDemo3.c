#include<stdio.h>

void main(){

    //bubble sort
    int i,j,temp;
    int arr[]={10,11,8,23,2};
    
    for(i=0;i<5-1;i++){
        //0 = 10
        //1 = 11
        //j =1 
        for(j=0;j<5-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j]; //temp = 10,
                arr[j] = arr[j+1]; //arr[0]=11
                arr[j+1] = temp; //arr[1]=10
            }
        }

    }
    for(i=0;i<5;i++){
        printf("\n i = %d",arr[i]);
    }

}