#include <stdio.h>

int main()
{
    int num;
    int lastDigit;

    printf("Enter a number: ");
    scanf("%d", &num);

    lastDigit = num - (num / 10) * 10;

    printf("Last digit = %d", lastDigit);

    return 0;
}