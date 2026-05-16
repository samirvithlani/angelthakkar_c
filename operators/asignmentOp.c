#include<stdio.h>

void main(){

    int a=10,b=20,c;
    printf("\n value of a = %d",a);
    printf("\n value of b = %d",b);

    //swap -->
    // c = a; //c = 10
    // a = b; //a = 20
    // b = c; //b = 10

    // a = a + b; //a = 30
    // b = a - b;//b = 30 - 20 = 10
    // a = a - b; //a = 30-10 20

    a = a * b; //a = 200
    b = a / b; //200/20 = 10
    a = a / b;  //200 / 10 = 20

    printf("\n value of a = %d",a);
    printf("\n value of b = %d",b);

}