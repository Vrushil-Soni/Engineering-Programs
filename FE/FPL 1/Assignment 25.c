/*
PROBLEM STATEMENT
Write a C program to accept a string with complete name of the employee and display the string eliminating the middle word. Example “Mayur Kumar Kulkarni” would be displayed as “Mayur Kulkarni”
*/

#include <stdio.h>

int main()
{
    char c;
    scanf(" %c", &c);
    if(isspace(c))
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    /*
    char fullName[30], name[20];
    int i=0, j=0;
    
    printf("Enter full name: ");
	scanf("%[^\n]",  fullName);
    
    while(fullName[i]!=32)
    {
        name[j]=fullName[i];
        j++;
        i++;
    }
    printf("%s", name);
    j++;
    i+=2;
    while(fullName[i]!=' ')
    {
        i++;
    }
    
    name[j]=32;
    j++;
    while(fullName[i]!='\0')
    {
        name[j]=fullName[i];
        j++;
        i++;
    }
    
    printf("\n%s\n\n", name);*/
    
	return 0;
}
