#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int N;
    scanf("%d", &N);

    int mid = N / 2;

    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {

            if (row == col ||                 
                row + col == N - 1 ||         
                row == mid ||                 
                col == mid) {                
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
