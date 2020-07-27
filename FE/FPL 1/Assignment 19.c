/*
PROBLEM STATEMENT
Write a C program to store N numbers in an array and reverse the elements of the array
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[20];
    int size, i;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    for(i=0; i<size; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Reversed array:\n");
    for(i=size-1; i>=0; i--)
    {
        printf("%d\n", array[i]);
    }
    return 0;
}
