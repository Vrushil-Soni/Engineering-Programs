/*
PROBLEM STATEMENT
Write a C program to check if the entered 3 digit number is twisted prime or not.
Hint: If the number obtained after reversing the number is also a prime then the number is twisted prime. Example 167, twisted 761, so 167 is twisted prime.
*/

#include <stdio.h>

int prime(int number);
int reverse(int number);

int main()
{
    int first, second;
    int first_flag, second_flag;
    
    printf("Enter a number: ");
    scanf("%d", &first);
    
    second=reverse(first);
    first_flag=prime(first);
    second_flag=prime(second);
    
    if(first_flag==2 && second_flag==2)
    {
        printf("The number is a twisted prime!\n");
    }
    else
    {
        printf("The number is not a twisted prime!\n");
    }
    
    return 0;
}

int prime(int number)
{
    int i, flag=0;
    
    for(i=1; i<=number; i++)
    {
        if(number%i==0)
        {
            flag++;
        }
    }
    
    return flag;
}

int reverse(int number)
{
    int reversed, remainder;
    reversed=0, remainder=0;
    
    while(number>=1)
    {
        remainder=number%10;
        reversed=reversed*10 + remainder;
        number=number/10;
    }
    
    return reversed;
}
