#include <stdio.h>
#include <math.h>

float calculateSimpleInterest(float principal, float rate, float time) {
    return (principal * rate * time) / 100;
}

float calculateCompoundInterest(float principal, float rate, float time) {
    return principal * (pow((1 + rate / 100), time)) - principal;
}

int main() {
    float principal, rate, time;
    

    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    
    printf("Enter the rate of interest (in %%): ");
    scanf("%f", &rate);
    
    printf("Enter the time period (in years): ");
    scanf("%f", &time);
    
    float simpleInterest = calculateSimpleInterest(principal, rate, time);
    printf("\nSimple Interest: %.2f\n", simpleInterest);
    
    float compoundInterest = calculateCompoundInterest(principal, rate, time);
    printf("Compound Interest: %.2f\n", compoundInterest);

    return 0;
}
