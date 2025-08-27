//Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include<stdio.h>
int main() {
    int a; 
    printf("Enter year ");
    scanf("%d", &a);
    if (a%4 ==0 && a%100 != 0 || a%400 == 0) {
        printf("This is a leap year \n");
    }
    else{
        printf("This is not a leap year \n");
    }
    return 0;
}
