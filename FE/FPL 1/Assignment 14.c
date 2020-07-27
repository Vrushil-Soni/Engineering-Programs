/*
PROBLEM STATEMENT
Write a C program to store the N data samples in an array and calculate mean, mode and median
*/

#include <stdio.h>
#include <stdlib.h>

int * readArray(int size);
float mean(int *array, int size);

int main()
{
    int size, mod;
    int *dataset;
    printf("Enter the sample size: ");
    scanf("%d", &size);
    dataset=readArray(size);
    float avg, med;
    avg = mean(dataset, size);
    printf("Mean: %0.2f\nMedian: %0.2f\nMode: %0.2f\n", avg);
    return 0;
}

int * readArray(int size)
{
    int i;
    int *array;
    array=(int *) malloc(sizeof(int) * size);
    for(i=0; i<size; i++)
    {
        scanf("%d", (array+i));
    }
    return array;
}

float mean(int *array, int size)
{
    int i;
    float mean=0;
    for(i=0; i<size; i++)
    {
        mean+=*(array+i);
    }
    mean/=size;
    return mean;
}
