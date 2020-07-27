/*
PROBLEM STATEMENT
Write a C program that declares and initializes a double, an int and a char variable and a pointer to each of the three variables and one double pointer to store pointer address. Your program should print the address of, and value stored in, and the memory size (in bytes) of each of seven variables.
*/

#include <stdio.h>

int main()
{
    double variable=3.1428, *doublePtr, **ptrPtr;
    int integer=100, *intPtr;
    char character='A', *charPtr;
    
    printf("Enter a floating point number: ");
    scanf("%lf", &variable);
    printf("Enter an integer: ");
    scanf("%d", &integer);
    printf("Enter a character: ");
    scanf(" %c", &character);
    
    doublePtr=&variable;
    intPtr=&integer;
    charPtr=&character;
    ptrPtr=&doublePtr;
    
    printf("\nDouble-\nAddress: %u\nValue: %lf\nSize: %d bytes\n", doublePtr, *doublePtr, sizeof(double));
    printf("\nInteger-\nAddress: %u\nValue: %d\nSize: %d bytes\n", intPtr, *intPtr, sizeof(int));
    printf("\nCharacter-\nAddress: %u\nValue: %c\nSize: %d bytes\n", charPtr, *charPtr, sizeof(char));
    printf("\nAddress of double pointer to variable: %u\n", ptrPtr);
}
