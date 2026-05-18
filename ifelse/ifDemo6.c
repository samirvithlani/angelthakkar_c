#include<stdio.h>


//main function
//void return type
void main(){

        //nested if else..
        //1 cond --> true
        int advpayment=0,qc=1; //0 means no 1 means yes
        if(advpayment==1){
            printf("\n adv payment is done we can do QC:");
            if(qc==1){
                printf("\n QC is done goods are eligible for delivery");
            }
            else{
                printf("\n QC is not done ");
            }
        }
        else{
            printf("\n no advance payment :");
        }

}