
#include <stdio.h>
int main() {
    int s, m;
    scanf("%d", &s);
    m = s / 60;
    s %= 60;
    printf("%d minutes %d seconds", m, s);
    return 0;
}