/*
PROBLEM STATEMENT
Write a C program to store Chemistry subject test marks of N students in an array and find the Minimum and Maximum score. Test maximum marks= 20. Your program should accept marks ranging between 0 to 20 only.
*/

#include <stdio.h>

int main()
{
    int size, i, max, min;
    int marks[30];
    
    printf("Enter size of the array: ");
    scanf("%d", &size);
    
    printf("Enter marks: ");
    for(i=0; i<size; i++)
    {
        do
        {
            scanf("%d", &marks[i]);
        }
        while(marks[i]<0 || marks[i]>20);
    }
    
    max=marks[0];
    min=marks[0];
    
    for(i=0; i<size; i++)
    {
        if(marks[i]>max)
        {
            max=marks[i];
        }
        else if(marks[i]<min)
        {
            min=marks[i];
        }
    }
    
    printf("Maximum marks: %d\nMinimum marks: %d", max, min);
    
    return 0;
}
