#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
    // User function Template for C
 {
    // code here
    int count=0,n;
    scanf("%d",&n);
    while(n!=0){
        
        n/=10;
        count++;
    }
    printf("%d",count);
    return 0;
}
