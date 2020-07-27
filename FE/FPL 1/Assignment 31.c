/*
PROBLEM STATEMENT
Write a C program to carry out following operations on strings using library functions- a) To concatenate a string S2 to string S1
b) To find the length of a given string
c) To compare two strings S1 and S2
d) To copy a string S2 to another string S1
*/
#include <stdio.h>
int main()
{
    char s1[100], s2[100], i, j;

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    // calculate the length of string s1
    // and store it in i
    for(i = 0; s1[i] != '\0'; ++i);

    for(j = 0; s2[j] != '\0'; ++j, ++i)
    {
        s1[i] = s2[j];
    }

    s1[i] = '\0';
    printf("After concatenation: %s \n", s1);
	printf("NEw length of s1 is: %d \n",strlen(s1));
	printf(strcmp(s1,s2));
	printf("\n");
	strcpy(s2,s1);
	printf("After copy: %s \n", s2);

    return 0;
}