/*
PROBLEM STATEMENT
Write a C program to generate first 20 Fibonacci numbers.
*/

#include <stdio.h>

int main()
{
    int count, fib, number, next_number;
    count=0, number=0, next_number=1;
    
    printf("%d\n", number);
    printf("%d\n", next_number);
    
    while(count<18)
    {
        fib = number + next_number;
        number=next_number;
        next_number=fib;
        printf("%d\n", fib);
        count++;
    }
    
    return 0;
}
