//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include<stdio.h>
int main() {
    int sec,hours,min,secoonds;
    printf("Enter time in seconds\n");
    scanf("%d",&sec);
    hours=sec/3600;
    min=(sec%3600)/60;
    secoonds=(sec%3600)%60;
    printf("Time in hours:minutes:seconds format is %d:%d:%d\n",hours,min,secoonds);
    return 0;
}