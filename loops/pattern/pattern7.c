#include<stdio.h>

/*
   
  *
 * *
* * *  


*/

void main(){
 

    int i,j;
    for(i=1;i<=3;i++){

        //3-1 =2
        //3-2 =1
        for(j=1;j<=3-i;j++){
            printf(" ");
        }
        //  * 
        // * *
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
        
        
    }

    
}