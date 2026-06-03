#include<stdio.h>
/*
    1 2 3 4
    8 7 6  5
    9 10 11 12
    16 15 14 13

*/

void main(){

    int i,j;
    //i0,1,2
    for(i=0;i<4;i++){

        //i=2
        if(i%2==0){
            //
            for(j=1;j<=4;j++){
                //2*4+1 =9
                printf("%d ",i*4+j);
            }
        }
        else{
            for(j=4;j>=1;j--){
                //1*4+4 = 8
                //1*4+3 = 7
                printf("%d ",i*4+j);
            }
        }
        printf("\n");
    }

}