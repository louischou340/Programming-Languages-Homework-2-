#include <stdio.h>

int main(void) {
    int row, col;

    printf("(A)\n");
    for (row = 1; row <= 10; row++) {
        for (col = 1; col <= row; col++)
            printf("*");
        printf("\n");
    }

    printf("\n(B)\n");
    for (row = 10; row >= 1; row--) {
        for (col = 1; col <= row; col++)
            printf("*");
        printf("\n");
    }

    printf("\n(C)\n");
    for (row = 10; row >= 1; row--) {
        for (col = 10; col > row; col--)
            printf(" ");  // leading spaces
        for (col = 1; col <= row; col++)
            printf("*");
        printf("\n");
    }

    printf("\n(D)\n");
    for (row = 1; row <= 10; row++) {
        for (col = 10; col > row; col--)
            printf(" ");  // leading spaces
        for (col = 1; col <= row; col++)
            printf("*");
        printf("\n");
    }

    return 0;
}
