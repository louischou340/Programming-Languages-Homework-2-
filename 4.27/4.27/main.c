#include <stdio.h>

int main(void) {
    int side1, side2, hypotenuse;

    printf("Pythagorean triples (sides <= 500):\n");
    printf("Side1\tSide2\tHypotenuse\n");

    for (side1 = 1; side1 <= 500; side1++) {
        for (side2 = side1; side2 <= 500; side2++) {  // start from side1 to avoid duplicates
            for (hypotenuse = 1; hypotenuse <= 500; hypotenuse++) {
                if (side1 * side1 + side2 * side2 == hypotenuse * hypotenuse) {
                    printf("%d\t%d\t%d\n", side1, side2, hypotenuse);
                }
            }
        }
    }

    return 0;
}
