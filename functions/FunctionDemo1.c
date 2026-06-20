#include<stdio.h>

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

void main(){

    int x=100,y=200;
    test(); //calling of functiond
    add(10,20);
    add(x,y);
    //add(); //too few arguments to function 'add'
    
}