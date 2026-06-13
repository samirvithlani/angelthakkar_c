#include<stdio.h>

void main(){

        char c[100],i;
        // printf("\n enter value of c :");
        // scanf("%s",&c);
        puts("enter value of c");
        gets(c);

        // for(i=0;i<5;i++){
        //     printf("%c",c[i]);
        // }

        //['s','a','m','\0']
        for(i=0;c[i]!='\0';i++){
            printf("%c",c[i]);
        }


}