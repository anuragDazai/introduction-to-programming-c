#include <stdio.h>

int main() {
    int total_days, yrs, months, days;

    printf("Enter age in days: ");
    scanf("%d", &total_days);

    yrs = total_days / 365;
    months = (total_days % 365) / 30;
    days = (total_days % 365) % 30;

    printf("Age = %d Years, %d Months, %d Days\n", yrs, months, days);

    return 0;
}