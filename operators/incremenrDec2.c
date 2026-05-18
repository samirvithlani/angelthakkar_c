#include<stdio.h>

void main(){

    int a = 10,b=20,res=0;
        //11 + 21 + 12
    //res = ++a + ++b + ++a;
    // =  10 + 21
    //res = a++ + ++b;
    //  = 21 +  22 
    res = ++b + b++;
    printf("\n res = %d",res);
    
}