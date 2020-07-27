/*
PROBLEM STATEMENT
Write a C program to find out if the number is a Pythagoras triplet. Ex a2=b2+c2
*/

#include <stdio.h>

int main()
{
    int a, b, c;
    
    printf("Enter first side: ");
    scanf("%d", &a);
    printf("Enter second side: ");
    scanf("%d", &b);
    printf("Enter third side: ");
    scanf("%d", &c);
    
    if(((a*a) == (b*b) + (c*c)) || ((b*b) == (a*a) + (c*c)) || ((c*c) == (b*b) + (a*a)))
    {
        printf("%d, %d, %d are Pythagorean triplets!", a, b, c);
    }
    else
    {
        printf("%d, %d, %d are not Pythagorean triplets!", a, b, c);
    }
    
    return 0;
}
