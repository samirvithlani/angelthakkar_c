#include<stdio.h>

void main(){

    int a = 10,res=0,b=20;
    //res = --a;
    //res = --a + --a;
    //   9 + 8
    //res = --a + a--;
    //   8 + 8 + 7
    //res = --a + --a + --a;
    //   10 + 10
    //res = --a + ++a;

    //   (11 +  12) - 19 + 19 = 
//    res = ++a + a++ - --b + b++;
//   9 + 19 + 10 + 19
    res = --a + --b + ++a + b++;
    printf("\n res = %d",res);


}