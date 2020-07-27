/*
PROBLEM STATEMENT
Write a C program to check whether input number is Prime or not.
*/

#include <stdio.h>

int main()
{
    int number, i, flag=0;
    printf("Enter a number: ");
    scanf("%d", &number);
    for(i=1; i<=number; i++)
    {
        if(number%i==0)
        {
            flag++;
        }
    }
    if(flag==2)
    {
        printf("The number is prime!");
    }
    else
    {
        printf("The number is not prime!");
    }
    return 0;
}
