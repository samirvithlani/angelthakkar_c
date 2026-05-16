#include<stdio.h>

void main(){

        //pre increment , post increment
        // ++a , a++
        int a =10,res=0;
        //res = a++;
            // 12 + 12 + 13  + 14  + 15
        //res = ++a + ++a + ++a + ++a + ++a;
          // 17 + 17 + 18 = 
        //res = ++a + ++a + ++a;

           //11 + 12
        //res = ++a + a++;    
            //12 + 12 + 12 = 
        //res = ++a + ++a + a++;
           //11 + 12 + 12 + 13
        //res = ++a + a++ + a++ + a++;
        //    11+ 12 + 12  +13
        res = ++a + a++ + a++ + a++;

        printf("\n res = %d",res);
        printf("\n value pf a = %d",a);




}