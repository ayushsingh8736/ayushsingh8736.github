#include <stdio.h>

#define MAX_SIZE 100 // Maximum size of the matrices

int main() {
    int n, i, j;

    printf("Enter the order of the matrices (n): ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX_SIZE) {
        printf("Invalid order. Please enter a value between 1 and %d.\n", MAX_SIZE);
        return 1;
    }

    int matrix1[MAX_SIZE][MAX_SIZE], matrix2[MAX_SIZE][MAX_SIZE], sum[MAX_SIZE][MAX_SIZE], product[MAX_SIZE][MAX_SIZE];

    // Get input for matrix1
    printf("Enter elements of matrix 1:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Get input for matrix2
    printf("Enter elements of matrix 2:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Calculate sum of matrices
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Calculate product of matrices
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            product[i][j] = 0;
            for (int k = 0; k < n; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Print the sum of matrices
    printf("\nSum of matrices:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    // Print the product of matrices
    printf("\nProduct of matrices:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}