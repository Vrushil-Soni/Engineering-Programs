/*
PROBLEM STATEMENT
Write a C program to store N numbers in an array and display the square of each number in the array
*/

#include <stdio.h>

int main()
{
    int size, i;
    int array[30];
    
    printf("Enter size of the array: ");
    scanf("%d", &size);
    
    printf("Enter numbers: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &array[i]);
    }
    
    for(i=0; i<size; i++)
    {
        printf("%d\n", (array[i]*array[i]));
    }
    
    return 0;
}
