/*
PROBLEM STATEMENT
Write a C program to calculate the sum of all positive even numbers and the sum of all negative odd numbers from the set of input numbers
*/

#include <stdio.h>

int main()
{
    int number, evenSum=0, oddSum=0;
    char repeat='y';
    
    while(repeat=='Y' || repeat=='y')
    {
        printf("Enter a number: ");
        scanf("%d", &number);
        
        if(number%2==0)
        {
            evenSum+=number;
        }
        else
        {
            oddSum+=number;
        }
        
        printf("Do you want to enter another number? (y/n)");
        scanf(" %c", &repeat);
    }
    
    printf("The sum of all the even numbers is %d, and that of odd numbers is %d\n", evenSum, oddSum);
    
    return 0;
}
