#include <stdio.h>

int main() {
    float num;
    int floor_val, ceil_val;

    printf("Enter a decimal number: ");
    scanf("%f", &num);

    int int_part = (int)num;

    if (num == (float)int_part) {
        floor_val = int_part;
        ceil_val = int_part;
    } else if (num > 0) {
        floor_val = int_part;
        ceil_val = int_part + 1;
    } else {
        floor_val = int_part - 1;
        ceil_val = int_part;
    }

    printf("Floor value  = %d\n", floor_val);
    printf("Ceil value   = %d\n", ceil_val);

    return 0;
}