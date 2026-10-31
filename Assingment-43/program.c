#include <stdio.h>

int main() {
    int n, c = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    while (n != 0) {
        n /= 10;
        c++;
    }
    printf("Digits = %d", c);
    return 0;
}