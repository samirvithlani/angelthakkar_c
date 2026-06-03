#include<stdio.h>
/*
    * 
   * *
  * * *     
  * * *
   * *
    * 

*/

void main(){

    int i,j;
    for(i=1;i<=3;i++){
        for(j=1;j<=3-i;j++){
            printf(" ");
        }
        //
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    for(i = 3-1;i>=1;i--){
        //i=2,1
        //j=1,j=2
        for(j =1;j<=3-i;j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }

}