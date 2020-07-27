/*
PROBLEM STATEMENT
Write a C program to compute the roots of given quadratic equation for non-zero coefficients.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    float det, x, y;
    
    printf("Enter the coefficient of x^2: ");
    scanf("%d", &a);
    printf("Enter the coefficient of x: ");
    scanf("%d", &b);
    printf("Enter the constant term: ");
    scanf("%d", &c);
    
    det = sqrt((b*b) - (4*a*c));
    x = ((-b) + (det)) / (2*a);
    y = ((-b) - (det)) / (2*a);
    
    printf("The roots of the given quadratic equation are %f and %f", x, y);
    return 0;
}
