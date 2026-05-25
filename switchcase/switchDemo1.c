#include<stdio.h>

void main(){

    int choice;
    printf("\n enter 1 For BCA :");
    printf("\n enter 2 For BBA :");
    printf("\n enter 3 For B.COM :");
    scanf("%d",&choice);

    switch(choice){
        case 1:
            printf("\n welcome to BCA");
        break;    
        case 2:
            printf("\n Welcome to BBA");
        break;
        case 3:
            printf("\n Welcome to B.COM");
        break;    
        default:
            printf("\n Invalid choice: ");
        break;    
    }



}