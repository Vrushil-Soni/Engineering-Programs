/*
PROBLEM STATEMENT
Write a C program to store N numbers in an array and search particular number
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[20];
    int size, search, i, flag=0;
    
    printf("Enter size of the array: ");
    scanf("%d", &size);
    
    for(i=0; i<size; i++)
    {
        scanf("%d", &array[i]);
    }
    
    printf("Enter number to search in the array: ");
    scanf("%d", &search);
    
    for(i=0; i<size; i++)
    {
        if(search==array[i])
        {
            flag=1;
            printf("%d is present in the array at position %d!\n", search, i+1);
            break;
        }
    }
    if(flag==0)
    {
        printf("%d is not present in the array!\n", search);
    }
    
    return 0;
}
