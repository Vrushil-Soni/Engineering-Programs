/*
PROBLEM STATEMENT
Write a C program to sort the roll numbers of present students. Mark the attendance of the present students roll numbers randomly in an array.
*/

#include<stdio.h>

int main()
{
	int roll[30];
	int size, i, j, temp;
	
	printf("Enter no. of students who are present: ");
	scanf("%d", &size);
	
	printf("\nEnter roll nos. of students who are present:\n");
	for(i=0; i<size; i++)
	{
		scanf("%d", &roll[i]);
	}
	
	for(j=0; j<size-1; j++)
	{
		for(i=0; i<(size-1); i++)
		{
			if(roll[i]>roll[i+1])
			{
				temp=roll[i];
				roll[i]=roll[i+1];
				roll[i+1]=temp;
			}
		}
	}
	
	printf("\nROLL NOS. OF PRESENT STUDENTS IN SORTED ORDER\n");
	for(i=0; i<size; i++)
	{
		printf("%d\n", roll[i]);
	}
	
	return 0;
}
