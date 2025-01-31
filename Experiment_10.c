#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next, i;

    // Get input from the user
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Print the Fibonacci series
    printf("Fibonacci Series:\n");
    for (i = 0; i < n; ++i) {
        if(i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }

    printf("\n");

    return 0;
}