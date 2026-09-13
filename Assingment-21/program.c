#include <stdio.h>

int main() {
    char name1[50], name2[50];
    int marks1[5], marks2[5];

    printf("Enter name of student 1: ");
    scanf("%s", name1);
    printf("Enter 5 subject marks for %s: ", name1);
    for (int i = 0; i < 5; i++) {
        scanf("%d", &marks1[i]);
    }

    printf("Enter name of student 2: ");
    scanf("%s", name2);
    printf("Enter 5 subject marks for %s: ", name2);
    for (int i = 0; i < 5; i++) {
        scanf("%d", &marks2[i]);
    }

    printf("\nHighest scorer per subject:\n");
    for (int i = 0; i < 5; i++) {
        if (marks1[i] > marks2[i]) {
            printf("Subject %d: %s (%d marks)\n", i + 1, name1, marks1[i]);
        } else if (marks2[i] > marks1[i]) {
            printf("Subject %d: %s (%d marks)\n", i + 1, name2, marks2[i]);
        } else {
            printf("Subject %d: Tie between %s and %s (%d marks)\n", i + 1, name1, name2, marks1[i]);
        }
    }

    return 0;
}