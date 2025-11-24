//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>

int main() {
    float a, b, c;

    // Input three sides of the triangle
    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // Check if it forms a valid triangle
    if (a + b > c && a + c > b && b + c > a) {
        // Check for type of triangle
        if (a == b && b == c) {
            printf("Equilateral Triangle\n");
        }
        else if (a == b || b == c || a == c) {
            printf("Isosceles Triangle\n");
        }
        else {
            printf("Scalene Triangle\n");
        }
    } 
    else {
        printf("The given sides do not form a valid triangle.\n");
    }

    return 0;
}
