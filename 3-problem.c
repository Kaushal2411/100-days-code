//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
int main () {
    float length, breadth;
    printf("Enter length of the rectangle\n");
    scanf("%f", &length);
    printf("Enter breadth of the rectangle\n");
    scanf("%f", &breadth);
    printf("The area of the rectangle is %.2f\n", length * breadth);
    printf("The perimeter of the rectangle is %.2f\n", 2 * (length + breadth));
    return 0;
}