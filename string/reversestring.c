#include<stdio.h>

void main(){

    char name []="naman",temp;
    int i,len=0;
    while(name[len]!='\0'){
        len++;
    }
    //printf("\n len of string = %d",len);
    for(i=0;i<len/2;i++){

        temp =name[i]; // name[0] =a temp =a
        name[i] =name[len-1-i]; //name[0] = name[3] name[0]=t
        name[len-1-i]=temp; //name[3] = a
    }

    printf("\n name= %s",name);

    //royal
}