#include <stdio.h>

int main() {
    int num, i, isPrime = 1; // isPrime flag: 1 (prime), 0 (not prime)

    // Get input from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Handle special cases: 0 and 1
    if (num <= 1) {
        isPrime = 0; 
    } else {
        // Check for divisibility from 2 to num/2
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break; // No need to check further if a divisor is found
            }
        }
    }

    // Print the result
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}