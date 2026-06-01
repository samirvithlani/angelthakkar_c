#include<stdio.h>

/*
   
1
1 2 3
2 3 4 5
3 4 5 6 7
4 5 6 7 8 9




*/

void main(){
 

    int i,j,s;
    for(i=1;i<=5;i++){
        s = i-1;
      for(j=0;j<i+1;j++){
        printf("%d ",s+j);
      }
        printf("\n");
    }

    
}