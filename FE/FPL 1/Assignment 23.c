/*
PROBLEM STATEMENT
Write a C program to accept a string and change the case of each character of the string. Example “ THIs Is a C Program” changes to “thiS iS A c pROGRAM”
*/

#include <stdio.h>

int main()
{
    char string[30];
    int i, changeCase;
    changeCase=32;
    
    printf("Enter a string: ");
    scanf("%[^\n]", string);
    
    for(i=0; string[i]!='\0'; i++)
    {
        if(string[i]>=65 && string[i]<=90)
        {
            string[i]+=changeCase;
        }
        else if(string[i]>=97 && string[i]<=122)
        {
            string[i]-=changeCase;
        }
    }
    
    printf("\n%s\n\n", string);
    
    return 0;
}
