#include <stdio.h>

int main() {
    int num1, num2, num3, greatest;

    // Get input from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Find the greatest number
    if (num1 >= num2 && num1 >= num3) {
        greatest = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        greatest = num2;
    } else {
        greatest = num3;
    }

    // Display the greatest number
    printf("The greatest number is: %d\n", greatest);

    return 0;
}