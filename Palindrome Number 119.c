#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
    {
    int num ;
    int remainder;
    double a,reversednum = 0 ;
   a=num;
    if(a<0){
         a = a*-1;
    }
    while (num != 0) {
        remainder = num % 10;
        reversednum = reversednum * 10 + remainder;
        num /= 10;
    }if(a == reversednum){
        printf("true");

    }else{
        printf("false");
    }

   
return 0;
}


