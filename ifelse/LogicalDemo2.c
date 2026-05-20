#include<stdio.h>
#include<stdbool.h>

void main(){

    bool isAadharcard= false,isPanCard=false,isDl= false;
    if(isAadharcard==true || isPanCard == true || isDl ==true){
        printf("\n you can book room");
    }
    else{
        printf("\n prove your citizenship...");
    }

}