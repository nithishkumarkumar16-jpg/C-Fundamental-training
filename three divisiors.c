#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
   
 {
    int count = 0,n;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }if(count==3){
       printf("true");
    }else{
        printf("false");
    }
    return 0;
}
