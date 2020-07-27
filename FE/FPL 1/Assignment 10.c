/*
PROBLEM STATEMENT
Write a C program to separate digits of input 4 digit integer, separate & display its digits.
*/

#include <stdio.h>

int main()
{
    int number, digit, newNumber=0;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    while(number>0)
    {
        digit=number%10;
        newNumber=newNumber*10+digit;
        number=number/10;
    }
    while(newNumber>0)
    {
        digit=newNumber%10;
        printf("%d\n", digit);
        newNumber=newNumber/10;
    }
    
    return 0;
}
