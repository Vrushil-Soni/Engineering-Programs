/*
PROBLEM STATEMENT
Write a C program to compute the factorial of the given positive integer using function
*/

#include<stdio.h>

long int factorial(int number);

int main()
{
	long int answer;
    int number=1;
    do
    {
        if(number<=0)
        {
            printf("\nInvalid input! Enter a positive integer!");
        }
        printf("\nEnter number to find factorial: ");
        scanf("%d", &number);
    }
    while(number<=0);
    answer=factorial(number);
    printf("\nFactorial of %d is %ld\n", number, answer);
	return 0;
}

long int factorial(int number)
{
    long int factorial=1;
    int i;
    for(i=1; i<=number; i++)
    {
        factorial*=i;
    }
    return factorial;
}
