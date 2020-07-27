/*
PROBLEM STATEMENT
Write a C program to enter a string. Frame a word by joining all the first characters of the words in the string. Example- input “Just Allow Me” will give output as “JAM”
*/

#include<stdio.h>

int main()
{
	char s[30], res[10];
	int size=0, i, j=1;
	
	/* gets a string with spaces */
	printf("Enter the string: ");
	scanf("%[^\n]", s);
	
	/* finds length of the string */
	while(s[size]!='\0')
	{
		size++;
	}
	
	/* puts initials in a new string called 'res' */
	res[0]=s[0];
	for(i=1; i<size; i++)
	{
		if(s[i] == ' ')
		{
			res[j]=s[i+1];
			j++;
		}
	}
	res[j]='\0';
	
	printf("\nOUTPUT - %s\n", res);
	
	return 0;
}
