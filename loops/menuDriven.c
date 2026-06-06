#include<stdio.h>
#include<stdlib.h>

void main(){

    int bal=0,withdraw=0,deposit=0,acop=0,choice;
    char c;

    do{
    printf("\n --------------WELCOME TO HDFC BANK ---------------------");
    printf("\n Press 1 for open account:");
    printf("\n Press 2 for withdraw amount:");
    printf("\n Press 3 for deposit amount:");
    printf("\n Press 4 for check Balance:");
    printf("\n press 5 for exit :");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        openac:
        //min bal 10000
        do{
            printf("\n enter balance for open ac :");
            scanf("%d",&bal);
        }while(bal<10000);

        printf("\n account opened successfully !!");
        printf("\n balance is =%d ",bal);
        acop=1; //ac op .

        break;
    case 4:
            if(acop==1){
            _flushall(); //buffer clean
            printf("\n press y for check balance and n for cancel");
            scanf("%c",&c);
            if(c=='y'){
                printf("\n your balance = %d",bal);
            }
            else{
                printf("\n Thanks for visit.");
            }
            }else{
                printf("\n please open account first:");
                goto openac;
            }
    break;    
    case 5:
            printf("\n Thanks for visit HDFC bank :");
            exit(0);
    break;
    
    default:
            
            exit(0);

        break;
    }
}while(choice!=5);


}