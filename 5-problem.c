//Q5: Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>
int main () {
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius\n");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9/5) + 32; // Convert Celsius to Fahrenheit
    printf("The temperature in Fahrenheit is %.2f\n", fahrenheit);
    return 0;
}