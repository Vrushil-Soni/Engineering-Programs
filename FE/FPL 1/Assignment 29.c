/*
PROBLEM STATEMENT
Write a C program to accept a string and replace all the vowels in the string with *.
*/

#include <stdio.h>

int main()
{
    char string[20];
    char vowels[]={'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U', '\0'};
    int i, j;
    printf("Enter a string: ");
    scanf("%s", string);
    for(i=0; string[i]!='\0'; i++)
    {
        for(j=0; vowels[j]!='\0'; j++)
        {
            if(string[i]==vowels[j])
            {
                string[i]='*';
            }
        }
    }
    printf("%s\n", string);
    return 0;
}
