#include <stdio.h>
#include "math.h"

int main() {
    int sum = add(10, 5);
    int diff = subtract(10, 5);

    printf("Addition: %d\n", sum);
    printf("Subtraction: %d\n", diff);

    return 0;
}