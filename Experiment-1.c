#include <stdio.h>
#include <stdbool.h>
#include <complex.h>

int main() {
    int num1;
    printf("Enter an integer: ");
    scanf("%d", &num1);
    
    float num2;
    printf("Enter a float number: ");
    scanf("%f", &num2);
    
    double real, imag;
    printf("Enter the real and imaginary parts of a complex number: ");
    scanf("%lf %lf", &  real, & imag);

    complex double num3 = real + imag * I;

    _Bool boolVal;
    printf("Enter a 0 (false) or 1 (true) for boolean: ");
    scanf("%hhd", &boolVal);
    
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]s", str); 
    
    printf("\nYou entered the following values:\n");
    printf("Integer: %d\n", num1);
    printf("Float: %.2f\n", num2);
    printf("Complex Number: %.2f + %.2fi\n", creal(num3), cimag(num3));
    printf("Boolean: %s\n", boolVal ? "True" : "False");
    printf("String: %s\n", str);
    
    return 0;
}
