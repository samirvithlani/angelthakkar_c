#include<stdio.h>
#include<stdlib.h>

void main(){


        int choice,chance=3;
        start:
        printf("\n enter choice :");
        scanf("%d",&choice);
        if(choice>10){
            printf("invalid choice try again :");
            chance--;
            if(chance==0){
                printf("channces are over !!!");
                exit(0);
            }
            goto start;
        }
        else{
            printf("\n welcome !!");
        }
        

}