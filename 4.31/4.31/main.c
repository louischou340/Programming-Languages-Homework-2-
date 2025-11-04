#include <stdio.h>

int main() {
    int n = 5; // 蒂场︽计程い丁ê︽Τ 2*n - 1 聋琍

    // 场
    for (int i = 1; i <= n; i++) {
        // 
        for (int j = i; j < n; j++) {
            printf(" ");
        }
        // 琍琍
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    // 场
    for (int i = n - 1; i >= 1; i--) {
        // 
        for (int j = n; j > i; j--) {
            printf(" ");
        }
        // 琍琍
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
