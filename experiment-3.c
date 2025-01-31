#include <stdio.h>

int main() {
    int intValue = 10;
    float floatValue = 5.75;


    float result1 = intValue + floatValue;
    printf("Result of int + float (implicit conversion): %.2f\n", result1);

    char charValue = 'A'; 
    int result2 = intValue + charValue;
    printf("Result of int + char (implicit conversion): %d\n", result2);


    double doubleValue = 3.14159;

    int intFromDouble = (int) doubleValue;
    printf("Explicit conversion of double to int: %d\n", intFromDouble);

    float floatValue2 = 7.89;
    int intFromFloat = (int) floatValue2;
    printf("Explicit conversion of float to int: %d\n", intFromFloat);

    int intValue2 = 9;
    float floatFromInt = (float) intValue2;
    printf("Explicit conversion of int to float: %.2f\n", floatFromInt);

    char charFromInt = (char) intValue2;
    printf("Explicit conversion of int to char: %c\n", charFromInt);

    return 0;
}
