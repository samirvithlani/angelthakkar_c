#include<stdio.h>

void main(){


        int a[3][3],i,j;
        
        //i =0,1,2
        for(i=0;i<3;i++){
            //j=0,1,2
            //j =0,1,2
            //j=0,1,2
            for(j=0;j<3;j++){
                printf("\n enter value of %d[%d]",i,j);
                scanf("%d",&a[i][j]);
            }
        }


        for(i=0;i<3;i++){            
            for(j=0;j<3;j++){
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }



}