#include <stdio.h>

int main() {
    double n;
    printf("Enter a number: ");
    scanf("%lf", &n);

    if (n < 0) {
        printf("Square root of a negative number is not real.\n");
        return 0;
    }

    double guess = n / 2.0;
    if (n == 0) guess = 0;

    // Iterate until precision is within 0.00001
    for (int i = 0; i < 20; i++) {
        if (guess != 0) {
            guess = (guess + (n / guess)) / 2.0;
        }
    }

    printf("Square root of %.2lf = %.4lf\n", n, guess);

    return 0;
}