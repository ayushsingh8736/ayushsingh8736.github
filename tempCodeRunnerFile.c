#include <stdio.h>

int main() {
    float marks[5], total = 0.0, percentage;

    printf("Enter marks for 5 subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i];
    }
    percentage = (total / 500) * 100;  

    printf("\nPercentage: %.2f%%\n", percentage);

    if (percentage >= 90 && percentage <= 100) {
        printf("Grade: A\n");
    } else if (percentage >= 80 && percentage < 90) {
        printf("Grade: B\n");
    } else if (percentage >= 60 && percentage < 80) {
        printf("Grade: C\n");
    } else if (percentage < 60) {
        printf("Grade: D\n");
    } else {
        printf("Invalid percentage.\n");
    }

    return 0;
}