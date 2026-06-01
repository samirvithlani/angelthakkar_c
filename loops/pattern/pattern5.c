#include<stdio.h>

/*
   
1
1 2 3
2 3 4 5
3 4 5 6 7
4 5 6 7 8 9




*/

void main(){
 

    int i,j;
    for(i=1;i<=5;i++){

        for(j=1;j<=i;j++){
            printf("%d ",i);
        }
        printf("\n");
    }

    
}