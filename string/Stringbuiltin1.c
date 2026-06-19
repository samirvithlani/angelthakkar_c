#include<stdio.h>
#include<string.h>

void main(){


    char name[]="shah",copyname[]="";
    char fname []="raj" ,lname[]="shah";
    char a[]="abc";
    char b[] = "abc";
    char fruit []="banana";
    int len,flag;
    len = strlen(name);
    printf("\n len = %d",len);


    strcpy(copyname,name);
    printf("\n copy name = %s",copyname);

    strcat(fname,lname);
    printf("\n concat name = %s",fname);

    // flag= strcmp(name1,name2);
    // printf("\n flag = %d",flag);

    printf("\n %d",strcmp(a,b));

    //true = 1,false =0
    if(strcmp(a,b)==0){
        printf("\n both are same :");
    }
    else{
        printf("\n both are dif...");
    }


    //find first occurance.
    //printf("%s",stchr(fruit,'a'));



    







}