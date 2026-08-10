#include <stdio.h>
int main()
{
    int num1;
    int num2;
    int difference;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    difference = num1 - num2;

    printf("Difference = %d", difference);

    return 0;
}   