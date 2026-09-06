#include <stdio.h>

int main() {
    float radius, base, height, side, length, width;
    
    printf("Enter circle radius: ");
    scanf("%f", &radius);
    printf("Circle Area: %f\n", 3.14159 * radius * radius);
    
    printf("Enter triangle base and height: ");
    scanf("%f %f", &base, &height);
    printf("Triangle Area: %f\n", 0.5 * base * height);
    
    printf("Enter square side: ");
    scanf("%f", &side);
    printf("Square Area: %f\n", side * side);
    
    printf("Enter rectangle length and width: ");
    scanf("%f %f", &length, &width);
    printf("Rectangle Area: %f\n", length * width);
    
    return 0;
}