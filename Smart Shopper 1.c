#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float a,b,c,d,e,f,g,bf,tf,ttf;
    scanf("%f%f",&a,&b);
    scanf("%f%f",&c,&d);
    scanf("%f%f",&e,&f);
    scanf("%f",&g);
    bf=((a*b)+(c*d)+(e*f));
    printf("Total (Before Tax): %.2f\n",bf);
    tf=(bf*10/100);
    ttf=tf+bf;
    printf("Total (After Tax): %.2f\n",ttf);
    if(g<ttf){
        printf("Over Budget");
    }else{
         printf("Within Budget");
         }
       return 0;
}
