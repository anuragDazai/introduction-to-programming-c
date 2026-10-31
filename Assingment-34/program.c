#include <stdio.h>

int main() {
    float monthly_salary, annual_salary, tax = 0;

    printf("Enter monthly salary: ");
    scanf("%f", &monthly_salary);

    annual_salary = monthly_salary * 12;

    if (annual_salary <= 250000) {
        tax = 0;
    } 
    else if (annual_salary <= 500000) {
        tax = annual_salary * 0.05;
    } 
    else if (annual_salary <= 1000000) {
        tax = annual_salary * 0.20;
    } 
    else {
        tax = annual_salary * 0.30;
    }

    printf("Annual Salary = Rs. %.2f\n", annual_salary);
    printf("Income Tax    = Rs. %.2f\n", tax);

    return 0;
}