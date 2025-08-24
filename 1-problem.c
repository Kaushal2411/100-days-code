//Q1: Write a program to input two numbers and display their sum.
#include <stdio.h>
int main() {
    int num1, num2, sum; // Declare variables to store the two numbers and their sum
    printf("Enter two numbers: "); // Prompt the user to enter two numbers
    scanf("%d %d", &num1, &num2); // Read the two numbers from user input
    sum = num1 + num2; // Calculate the sum of the two numbers
    printf("The sum of %d and %d is %d\n", num1, num2, sum); // Display the result
    return 0; // Return 0 to indicate successful execution
}
