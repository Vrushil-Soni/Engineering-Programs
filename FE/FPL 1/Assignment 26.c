/*
PROBLEM STATEMENT
Write a C program that will check whether given string is palindrome or not.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char string[100], reversed[100];
    
    if(strcmp(string,strrev(string))==0)
    {
        printf("Palindrome!");
    }
    else
    {
        printf("Not a palindrome!");
    }
    
    return 0;
}
