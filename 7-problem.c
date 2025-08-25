//Q7: Write a program to swap two numbers without using a third variable.
#include <stdio.h>
int main () {
    int a,b;
    printf("Enter a number\n");
    scanf("%d", &a);
    printf("Enter another number\n");
    scanf("%d", &b);
    a=a+b; //sum of a and b is stored in a
    b=a-b; //original value of a is stored in b
    a=a-b; //original value of b is stored in a
    printf("After swapping, the first number is %d and the second number is %d\n",a,b);
    return 0;
}