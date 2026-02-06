#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int size = 2 * n - 1;
    int center = n - 1;

    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            if (abs(row - center) + abs(col - center) == center) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
