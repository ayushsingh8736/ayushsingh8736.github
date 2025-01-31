
#include <stdio.h>

int main() {
    int n, i, sum_even = 0, sum_odd = 0;

    // Get input from the user
    printf("Enter the value of N: ");
    scanf("%d", &n);

    // Calculate sum of even and odd numbers
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sum_even += i;
        } else {
            sum_odd += i;
        }
    }

    // Display the results
    printf("Sum of even numbers from 1 to %d: %d\n", n, sum_even);
    printf("Sum of odd numbers from 1 to %d: %d\n", n, sum_odd);

    return 0;
}