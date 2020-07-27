/*
PROBLEM STATEMENT
Write a C program to calculate the sum of all numbers from 1 to 100 that are divisible by 4
*/

#include <stdio.h>

int main()
{
    int sum=0, i;
    for(i=1; i<=100; i++)
    {
        if(i%4==0)
        {
            sum+=i;
        }
    }
    printf("%d", sum);
    return 0;
}
