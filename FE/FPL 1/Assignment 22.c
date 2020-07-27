/*
PROBLEM STATEMENT
Write a C program to accept a string and to display the following:
(a) Total number of characters in the string
(b) Total number of vowels in the string
(c) Total number of occurrence of particular character in the string
*/

#include <stdio.h>

int main()
{
    char string[30], vowels[]={'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U', '\0'};
    char search;
    int i, j, length=0, occurrence=0, vowel=0;
    
    printf("Enter a string: ");
	scanf("%[^\n]", string);
    printf("Enter a character to search: ");
	scanf(" %c", &search);
    
    i=0;
    while(string[i]!='\0')
    {
        length++;
        i++;
    }
    
    printf("The length of the string is %d", length);
    
    for(i=0; string[i]!='\0'; i++)
    {
        for(j=0; vowels[j]!='\0'; j++)
        {
            if(string[i]==vowels[j])
            {
                vowel++;
            }
        }
    }
    
    printf("\nThe no. of vowels in the string are %d", vowel);
    
    for(i=0; string[i]!='\0'; i++)
    {
        if(search==string[i])
        {
            occurrence++;
        }
    }
    
    printf("\nThe no. of occurrences of %c in the string are %d\n", search, occurrence);
    
	return 0;
}
