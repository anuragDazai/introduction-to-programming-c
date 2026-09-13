#include <stdio.h>

int main() {
    float c, f;

    // Celsius to Fahrenheit
    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);
    f = (c * 9.0 / 5.0) + 32.0;
    printf("%.2f Celsius = %.2f Fahrenheit\n\n", c, f);

    // Fahrenheit to Celsius
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);
    c = (f - 32.0) * 5.0 / 9.0;
    printf("%.2f Fahrenheit = %.2f Celsius\n", f, c);

    return 0;
}