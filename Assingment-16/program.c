#include <stdio.h>

int main() {
    int num, d1, d2, d3, sum;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    // Extract individual digits
    d1 = num / 100;         // Hundreds place
    d2 = (num / 10) % 10;   // Tens place
    d3 = num % 10;          // Units place

    sum = d1 + d2 + d3;

    printf("Sum of digits = %d\n", sum);

    return 0;
}