#include <stdio.h>

int main() {
    int num, i, factorial = 1;

    // Get input from the user
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Calculate factorial
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (i = 1; i <= num; i++) {
            factorial *= i;
        }

        printf("Factorial of %d is %d\n", num, factorial);
    }

    return 0;
}