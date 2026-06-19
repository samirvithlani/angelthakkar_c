#include<stdio.h>

void main(){

        char str[100]="india";
        int i,j,flag;

        //i=0
        //i=3
        for(i=0;str[i]!='\0';i++){
            flag =0;
            //0
            //j=0
            for(j=0;j<i;j++){
                // i  == i
                if(str[i]==str[j]){
                    flag =1; //1
                    break;
                }
            }
            if(flag==0){
                printf("%c",str[i]);
            }

        }

}