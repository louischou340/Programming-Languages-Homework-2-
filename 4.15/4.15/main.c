#include <stdio.h>
#include <math.h>

int main(void) {
    double principal = 5000.0;
    double rate;
    int year;

    printf("Compound interest for an initial investment of $5000.00\n");
    printf("over 15 years for various interest rates:\n\n");

    // Loop over the interest rates
    for (rate = 0.10; rate <= 0.125; rate += 0.005) {
        printf("Interest rate: %.1f%%\n", rate * 100);
        printf("Year\tAmount on deposit\n");

        // Loop over the years
        for (year = 1; year <= 15; year++) {
            double amount = principal * pow(1.0 + rate, year);
            printf("%2d\t%.2f\n", year, amount);
        }

        printf("\n");
    }

    return 0;
}
