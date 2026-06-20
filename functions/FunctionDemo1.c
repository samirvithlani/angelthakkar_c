#include<stdio.h>
#include<string.h>

// function retur type function name (param){}


//without return type without params
void test(){

        printf("\n test function called !!");
}
//wihtout return type with argument..
//a,b function,scope local
void add(int a,int b){

    printf("\n ans = %d",a+b);
}

void fullName(char fname[],char lname[]){

    strcat(fname,lname);
    printf("\n %s",fname);
}

void main(){

    int x=100,y=200;
    char fname[]="amit",lname[]=" shah";
    test(); //calling of functiond
    add(10,20);
    add(x,y);
    //add(); //too few arguments to function 'add'
    fullName(fname,lname);
    
}