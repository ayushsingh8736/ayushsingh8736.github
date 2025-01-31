

#include <stdio.h>
#include <math.h> // For M_PI constant

int main() {
    float radius, area;

    // Ask the user to input the radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate the area of the circle
    area = M_PI * radius * radius;

    // Display the result
    printf("The area of the circle with radius %.2f is %.2f\n", radius, area);

    return 0;
}
