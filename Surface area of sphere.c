#include <stdio.h>

#define PI 3.14159265359

int main() {
    double radius, surfaceArea;

    // Take the radius of the sphere as input
    printf("Enter the radius of the sphere: ");
    if (scanf("%lf", &radius) != 1) {
        printf("Invalid input. Please enter a number.\n");
        return 1;
    }

    // Calculate the surface area
    surfaceArea = 4.0 * PI * radius * radius;

    // Print the result formatted to 2 decimal places
    printf("The surface area of the sphere is: %.2lf\n", surfaceArea);

    return 0;
}
