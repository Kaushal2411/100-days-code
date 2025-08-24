//Q6: Write a program to swap two numbers using a third variable.
#include <stdio.h>
int main () {
    int a,b,c;
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);
    c=a+b;
    a=c-a;
    b=c-b;
    printf("After swapping, the first number is %d and the second number is %d\n",a,b);
    return 0;
}