#include <stdio.h>

int main()
{
    float basic, da, hra, fixed, monthly, annual; // we declare all the necesary variables.

    printf("Enter the Basic salary: ");
    scanf("%f", &basic); // we take the basic salary of the person from the user.
    da = (50.0 / 100) * basic; // we take the dearness allowance of the person which is 50% of the basic salary.
    hra = (10.0 / 100) * basic; // we take the house rent allowance of the person which is 10% of the basic salary.
    fixed = 500;
    monthly = basic + da + hra + fixed;
    annual = monthly * 12;
    printf("Annual salary of the person is : %.2f", annual);
    return 0;
}