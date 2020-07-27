
/*
PROBLEM STATEMENT
Write a C program that stores 12 city names in a single dimensional array. Write function to display only those words that begin with a consonant and end with a vowel example- Begaluru, Mumbai
*/
 #include <stdio.h>
    void main()
    {
 
        string array[12];
        int i;
		int j;
		string k;
        printf("enter the element of an array \n");
        for (i = 0; i < 12; i++)
            scanf("%s", &array[i]);
 
        printf("Alternate elements of a given array \n");
        for (i = 0; i < 10; i += 2)
            printf( "%d\n", array[i]) ;
    }
	
	void fn()
	{
		for (i = 0; i < 12; i++)
		{
			j=strlen(array[i]);
			k=array[i];
			if((k[0]!='a'||k[0]!='e'||k[0]!='i'||k[0]!='o'||k[0]!='u') && k[j-1]=='a'||k[j-1]=='e'||k[j-1]=='i'||k[j-1]=='o'||k[j-1]=='u')
				printf("%s \n",k);
			k=NULL;
		}
	}