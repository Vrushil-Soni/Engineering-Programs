/*
PROBLEM STATEMENT
Write a C program to store N numbers in an array and display only those numbers that are perfect squares 
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int size, max, i, j, flag;
    flag=0;
    double number;
    int array[20], squares[20];
    
    printf("Enter size of array: ");
    scanf("%d", &size);
    
    printf("Enter numbers: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &array[i]);
    }
    
    max=array[0];
    for(i=0; i<size; i++)
    {
        if(max<array[i])
        {
            max=array[i];
        }
    }
    
    number=(int) ((pow(max, 0.5)) +2);
    for(i=0; i<number; i++)
    {
        squares[i]=i*i;
    }
    
    for(i=0; i<size; i++)
    {
        for(j=0; j<number; j++)
        {
            if(array[i]==squares[j])
            {
                printf("%d\n", array[i]);
                flag=1;
            }
        }
    }
    
    if(flag==0)
    {
        printf("There are no perfect squares in the array!\n");
    }
    
    return 0;
}
