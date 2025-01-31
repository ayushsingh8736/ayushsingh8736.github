#include <stdio.h>

int main() {
    int num1, num2, temp;

    // Get input from the user
    printf("Enter the value of num1: ");
    scanf("%d", &num1);

    printf("Enter the value of num2: ");
    scanf("%d", &num2);

    // Display original values
    printf("\nBefore swapping:\n");
    printf("num1: %d\n", num1);
    printf("num2: %d\n", num2);

    // Swap the values using a temporary variable
    temp = num1; 
    num1 = num2;
    num2 = temp;

    // Display swapped values
    printf("\nAfter swapping:\n");
    printf("num1: %d\n", num1);
    printf("num2: %d\n", num2);

    return 0;
}