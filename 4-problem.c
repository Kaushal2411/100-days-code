//Q4: Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
int main () {
    float radius;
    printf("Enter the radius\n");
    scanf("%f", &radius);
    printf("The area of the circle is %.2f\n", 3.14159 * radius * radius);
    printf("The circumference of the circle is %.2f\n", 2 * 3.14 * radius);
    return 0;
}