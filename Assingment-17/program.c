#include <stdio.h>

int main()
{
    int sum1, square1;
    int i, sum2 = 0, square2;

    /* Without using loop */
    sum1 = 1 + 2;
    square1 = sum1 * sum1;

    /* Using loop */
    for(i = 1; i <= 2; i++)
    {
        sum2 = sum2 + i;
    }

    square2 = sum2 * sum2;

    printf("Without loop = %d\n", square1);
    printf("With loop = %d\n", square2);

    return 0;
}