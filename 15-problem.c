//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include<stdio.h>
#include<ctype.h>
int main () {
    char ch;
    printf("Enter a character ");
    scanf("%c",&ch);
    if (isupper(ch)){
        printf("This is an uppercase character \n");
    }
    else if(islower(ch)){
        printf("This is a lowercase character \n");
    }
    else if (isdigit(ch)){
        printf("This is a numeric character \n");
    }
    else{
        printf("This is a special character \n");
    }
    return 0;
}
