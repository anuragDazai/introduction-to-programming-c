#include <stdio.h>

int main() {
    char choice;

    printf("Enter H for Heads or T for Tails: ");
    scanf("%c", &choice);

    if (choice == 'H' || choice == 'h') {
        printf("Captain 1 won!\n");
    }
    else if (choice == 'T' || choice == 't') {
        printf("Captain 2 won!\n");
    }
    else {
        printf("Invalid input!\n");
    }

    return 0;
}