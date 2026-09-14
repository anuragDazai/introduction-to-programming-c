#include <stdio.h>

int main() {
    long long n, temp;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%lld", &n);

    temp = n; // so we assing the value of the number we take from user in temp variable, now we have two copies one in n and another in temp.

    // so we take care of hhe single digit number as zero within the if condition and we will return 1 as the count of digits in that number.
    if (temp == 0) {
        count = 1;
    } else {
        // Handle negative numbers by converting to positive
        if (temp < 0) {
            temp = -temp;
        }

        while (temp != 0) {
            temp = temp / 10; // Remove the last digitsince we declared temp as int not a float so it'll automatically round down the value to the nearest integer.
            count++;   // we are incresing the count variable by 1 each time we remove a digit from temp.
        }
    }

    printf("Number of digits in %lld = %d\n", n, count);

    return 0;
}