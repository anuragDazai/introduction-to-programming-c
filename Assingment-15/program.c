#include <stdio.h>

int main()
{
    float a, b, c, d, root1, root2, s;
    int i;

    printf("Enter a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c;

    s = d;

    for (i = 0; i < 10; i++)
        s = (s + d / s) / 2;

    root1 = (-b + s) / (2 * a);
    root2 = (-b - s) / (2 * a);

    printf("Root 1 = %f\n", root1);
    printf("Root 2 = %f\n", root2);

    return 0;
}