/*
PROBLEM STATEMENT
Write a C program to store N numbers in an array and compute the sum of all even and odd numbers in an array.
*/

#include <stdio.h>

int main()
{
    int array[20], size, i, evenSum=0, oddSum=0;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    for(i=0; i<size; i++)
    {
        scanf("%d", &array[i]);
    }
    for(i=0; i<size; i++)
    {
        if(array[i]%2==0)
        {
            evenSum+=array[i];
        }
        else
        {
            oddSum+=array[i];
        }
    }
    printf("The sum of all the even numbers is %d, and that of odd numbers is %d\n", evenSum, oddSum);
    return 0;
}
