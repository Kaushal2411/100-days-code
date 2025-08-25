//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
int main(){
    int m = 0;
    while (m < 1) {
        int a;
        printf("Choose the type of interest to calculate:\n");
        printf("1. Simple Interest\n");
        printf("2. Compound Interest\n");
        printf("3. Exit\n");
        printf("Enter your choice\n");
        scanf("%d", &a);
        if (a == 1)
        {
            float principal, rate, time, interest; // Declare float variables for principal, rate, time, and interest.
            printf("Enter principal amount\n");
            scanf("%f", &principal); // This line takes input for the principal amount from the user.
            printf("Enter rate of interest rate \n");
            scanf("%f", &rate); // This line takes input for the rate of interest from the user.
            printf("Enter time in years\n");
            scanf("%f", &time);                         // This line takes input for the time period in years from the user.
            interest = (principal * rate * time) / 100; // This line calculates the simple interest using the formula: (P * R * T) / 100.
            printf("The simple interest when principal is %.2f, rate is %.2f and time is %.2f years is %.2f\n", principal, rate, time, interest);
        }
        else if (a == 2)
        {
            float principal, rate, time, interest; // Declare float variables for principal, rate, time, and interest.
            printf("Enter principal amount\n");
            scanf("%f", &principal); // This line takes input for the principal amount from the user.
            printf("Enter rate of interest rate \n");
            scanf("%f", &rate); // This line takes input for the rate of interest from the user.
            printf("Enter time in years\n");
            scanf("%f", &time); // This line takes input for the time period in years from the user.
            int i = 0;
            float total = 0.0;
            while (i < time)
            {                                                                     // This loop runs for the number of years specified by the user.
                interest = principal * rate / 100;                                // This line calculates the interest for the current year based on the principal and rate.
                principal = principal + interest;                                 // This line updates the principal amount by adding the interest.
                printf("Interest for year %d is %.2f\n", i + 1, interest);        // This line prints the interest earned for the current year.
                printf("Total amount after year %d is %.2f\n", i + 1, principal); // This line prints the total amount after adding the interest for the current year.
                total = total + interest;                                         // This line accumulates the total interest earned over the years.
                i++;
            }
            printf("Total interest after %.2f years is %.2f\n", time, total);   // This line prints the total interest earned after the specified time period.
            printf("Total amount after %.2f years is %.2f\n", time, principal); // This line prints the total amount after the interest has been added.
        }
        else if (a == 3)
        {
            m=m+1;
        }
        else
        {
            printf("Invalid choice\n");
        }
    }
    return 0;
}