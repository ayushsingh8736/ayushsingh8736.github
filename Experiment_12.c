#include <stdio.h>

int main() {
    int num, temp, sum = 0, digit;

    // Get input from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Store the original number for later use
    temp = num;

    // Extract and sum the digits
    while (temp > 0) {
        digit = temp % 10; // Extract the last digit
        sum += digit;
        temp /= 10; // Remove the last digit
    }

    // Display the result
    printf("Sum of digits of %d is %d\n", num, sum);

    return 0;
}