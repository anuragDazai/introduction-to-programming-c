#include <stdio.h>
int main() {
    int d, y, m;
    scanf("%d", &d);
    y = d / 365;
    d %= 365;
    m = d / 30;
    d %= 30;
    printf("%d years %d months %d days", y, m, d);
    return 0;
}