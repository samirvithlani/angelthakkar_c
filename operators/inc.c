#include <stdio.h>
int main() {
    int a = 5;
    // 7 + 7 + 7 =21
    //int res = ++a + ++a + a++; 
      //   = (7 +7) + 8 + 9 ++9
    //int res = ++a + ++a + ++a + ++a + a++;
     //(6+6)+8=20
    //int res = ++a + a++ + ++a;
            //(5 + 7) + 8 + 8 = 
    //int res = a++ + ++a + ++a + a++;
    //(5+6) + 7 
    //int res = a++ + a++ + a++;
    
    //int res = ++a + a++ + a++ + ++a + ++a;
    // res = (6 + 6) +   8 + 9 = 
    //int res = ++a + a++ + ++a + ++a;
    //      = (6+6) +  (9+9) 
    //int res = ++a + a++ + ++a + ++a ;
    //         (6+6)    + (9+9)   
    //int res = ++a + a++ + ++a + ++a;
            //(5 + 6) + (7+8)
    //int res = a++ + a++ + a++ + a++;
            //(6+6) +(7+8) + (9+10) =
    //int res = a++ + ++a + a++ + a++ + a++ + a++;
    //        (6   +  6)+ 7  + 9    + 12 + 12
    int res = ++a + a++ + ++a + a++ + ++a + ++a;
    

    printf("res = %d, a = %d\n", res, a);
}