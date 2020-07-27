/*
PROBLEM STATEMENT
Write a C program that will check whether one string is substring of other string or not.
*/

#include<stdio.h>

int substring(char string1[], char string2[]);
int stringLength(char string[]);

int main()
{
	char stringA[100], stringB[100];
    int check;
    printf("Enter a string: ");
	scanf("%[^\n]", stringA);
    printf("\nEnter another string to search: ");
    scanf("%s", stringB);
    if(stringLength(stringB)<stringLength(stringA))
    {
        check=substring(stringA, stringB);
        if(check==0)
        {
            printf("Entered string does not occur in %s\n", stringA);
        }
        else
        {
            printf("Entered string occurs %d times in %s\n", check, stringA);
        }
    }
    else
    {
        printf("Invalid string!\n");
    }
	return 0;
}

int substring(char string1[], char string2[])
{
	int i, j, flag, occurrence=0;
	for(i=0; i<(stringLength(string1)-stringLength(string2)); i++)
	{
		for(j=i; j<(i+stringLength(string2)); j++)
		{
			flag=1;
			if(string1[j]!=string2[j-i])
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
		{
			occurrence++;
		}
	}
	return occurrence;
}

int stringLength(char string[])
{
	int i=0, length=0;
	while(string[i]!='\0')
	{
		length++;
		i++;
	}
	return length;
}
