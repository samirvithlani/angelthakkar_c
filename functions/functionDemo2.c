#include<stdio.h>

int test(){

    printf("\n test function called !!");
    return 100;
}

//with return type without argument..
float findPers(){

    float pers = 90.90;
    printf("pers function called !!");
    return pers;
    //return 100; unreachable code !!
}

//with return type with argument..
int add(int a,int b){

    int c=0;
    printf("add function called..");
    c=  a + b;
    return c;
    

}


int calc(int a,int b,char op){
    
}

void main()
{
    
    int ans,sum;
    float pers;
    ans = test();
    printf("\n ans= %d",ans);
    pers = findPers();
    printf("\n pers =%.2f",pers);
    sum = add(10,20);
    printf("\n sum =%d",sum);
    //if any function is returning any value we call inside printf.
    printf("\n sum = %d",add(100,90));

    
}