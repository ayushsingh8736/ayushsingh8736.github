#include <stdio.h>

int main() {
    // Loop to print numbers from 1 to 10
    for (int i = 1; i <= 10; i++) {
        // Skip the number 5
        if (i == 5) {
            continue;
        }
        printf("%d ", i);
    }

    return 0;
}