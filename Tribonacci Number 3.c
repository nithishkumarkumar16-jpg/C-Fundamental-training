#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
    {
    int n;
    scanf("%d",&n);
    if(n==0){
        return 0;
    }
    if(n==1||n==2){
        return 1;
    }
   int a=0,b=1,c=1,d=0;
   
   for(int i=3;i<=n;i++){
       d=a+b+c;
       a=b;
       b=c;
       c=d;
   }

    return c;
}


