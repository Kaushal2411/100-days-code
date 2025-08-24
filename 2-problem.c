//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main () {
    float num1,num2;
    printf("Enter first number\n");
    scanf("%f",&num1);
    printf("enter second number\n");
    scanf("%f",&num2);
    printf("The sum of %.2f and %.2f is %.2f\n",num1,num2,num1+num2);
    printf("The difference of %.2f and %.2f is %.2f\n",num1,num2,num1-num2);
    printf("The product of %.2f and %.2f is %.2f\n",num1,num2,num1*num2);
    printf("The quotient of %.2f and %.2f is %.2f\n",num1,num2,num1/num2);
    return 0;
}