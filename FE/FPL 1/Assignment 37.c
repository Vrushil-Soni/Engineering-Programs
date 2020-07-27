/*
PROBLEM STATEMENT
Write a C program with function to swap values of two elements ( call by reference)
*/

#include <stdio.h>

void swap(int *one, int *two);

int main()
{
    int first, second;
    
    printf("Enter first number: ");
    scanf("%d", &first);
    printf("Enter second number: ");
    scanf("%d", &second);
    
    printf("Before Swapping:\na=%d\tb=%d\n\n", first, second);
    swap(&first, &second);
    printf("After Swapping:\na=%d\tb=%d\n", first, second);
    
    return 0;
}

void swap(int *one, int *two)
{
    int temp;
    temp=*one;
    *one=*two;
    *two=temp;
}
