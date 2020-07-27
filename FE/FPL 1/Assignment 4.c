/*
PROBLEM STATEMENT
Write a C program to accept the length of three sides of a triangle and to test and print the type of triangle as equilateral, isosceles or right angled or none
*/

#include <stdio.h>

int main()
{
    int sideA, sideB, sideC;
    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &sideA, &sideB, &sideC);
    if(sideA == sideB && sideB == sideC)
    {
        printf("The triangle is an equilateral triangle!");
    }
    else if(sideA == sideB || sideB == sideC || sideA == sideC)
    {
        printf("The triangle is an isosceles triangle!");
    }
    else if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==b*b+a*a)
    {
        printf("The triangle is a right angled triangle!");
    }
    else
    {
        printf("The triangle is a scalene triangle!");
    }
    return 0;
}
