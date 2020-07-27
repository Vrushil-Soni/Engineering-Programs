/*
PROBLEM STATEMENT
Write a C program to accept a string and print the string in alphabetical order. Example COMPUTER will be CEMOPRTU
*/

#include<stdio.h>

int main()
{
	char s[20], temp;
	int size=0, i, j;
	
	/* gets a string */
	printf("Enter the string: ");
	scanf("%s", s);
	
	/* finds length of the string */
	while(s[size]!='\0')
	{
		size++;
	}

	/* sorts the elements of the string using bubble sort */
	for(j=0; j<size-1; j++)
	{
		for(i=0; i<(size-1); i++)
		{
			if(s[i]>s[i+1])
			{
				temp=s[i];
				s[i]=s[i+1];
				s[i+1]=temp;
			}
		}
		
		/* displays pass by pass output */
		printf("\nIteration %d\n", j+1);
		printf("%s\n", s);
	}
	
	printf("\nThe string in alphabetical order is %s", s);
	
	return 0;
}
