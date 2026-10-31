#include <stdio.h>

int main() {
    int total_sec, hrs, mins, sec;

    printf("Enter time in seconds: ");
    scanf("%d", &total_sec);

    hrs = total_sec / 3600;
    mins = (total_sec % 3600) / 60;
    sec = (total_sec % 3600) % 60;

    printf("Time = %d Hours, %d Minutes, %d Seconds\n", hrs, mins, sec);

    return 0;
}