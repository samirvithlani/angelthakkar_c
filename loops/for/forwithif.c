#include<stdio.h>

void main(){

    //10 20 -->even no print
    int i;
    for(i=1;i<=20;i++){
        if(i%2==0){
            printf("\n even=%d",i);
        }
        else{
            printf("\n odd = %d",i);
        }
    }


}