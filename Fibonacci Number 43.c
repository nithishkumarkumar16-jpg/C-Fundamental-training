#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   int a=0,b=1,c=0,n;
   scanf("%d",&n);
   for(int i=2;i<=n;i++){
       c=a+b;
       a=b;
       b=c;
   }
printf("%d",c);
    return 0;
}
