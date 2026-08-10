#include <stdio.h>

int main()
{
    float principal;
    float rate;
    float time;
    float simpleInterest;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    printf("Enter time in years: ");
    scanf("%f", &time);

    simpleInterest = (principal * rate * time) / 100;

    printf("Simple Interest = %.2f", simpleInterest);

    return 0;
}