#include<stdio.h>

void main(){

    char name []="amit";
    char copyname[]="";
    int i;
    //copyname = name; error
    for(i=0;name[i]!='\0';i++){
        copyname[i] = name[i];
    }
    
    copyname[i]='\0';
    printf("\n copy name = %s",copyname);

}