/*
PROBLEM STATEMENT
Write a C program with functions to compute addition and subtraction of two matrices
*/

#include<stdio.h>

void readMatrix(int a[][10], int rowSize, int colSize);
void writeMatrix(int a[][10], int rowSize, int colSize);
void addMatrix(int a[][10], int rowA, int colA, int b[][10], int c[][10]);
void subtractMatrix(int a[][10], int rowA, int colA, int b[][10], int c[][10]);

int main()
{
	int matrixA[10][10], matrixB[10][10], matrixC[10][10];
	int rowA, colA, rowB, colB, choice;
	char repeat='y';
	
	printf("Enter no. of rows for matrix A: ");
	scanf("%d", &rowA);
	printf("Enter no. of columns for matrix A: ");
	scanf("%d", &colA);
	
	readMatrix(matrixA, rowA, colA);
	
	printf("Enter no. of rows for matrix B: ");
	scanf("%d", &rowB);
	printf("Enter no. of columns for matrix B: ");
	scanf("%d", &colB);
	
	readMatrix(matrixB, rowB, colB);
	
	while(repeat=='y' || repeat=='Y')
	{
		printf("\n1. Add\n2. Subtract\nSelect your option: ");
		scanf("%d", &choice);
		
		switch(choice)
		{
			case 1:
				{
					if(rowA==rowB && colA==colB)
					{
						addMatrix(matrixA, rowA, colA, matrixB, matrixC);
						writeMatrix(matrixC, rowA, colA);
					}
					else
					{
						printf("\nCannot add the matrices!\n");
					}
					break;
				}
			case 2:
                {
                    if(rowA==rowB && colA==colB)
					{
						subtractMatrix(matrixA, rowA, colA, matrixB, matrixC);
						writeMatrix(matrixC, rowA, colA);
					}
					else
					{
						printf("\nCannot subtract the matrices!\n");
					}
					break;
				}
			default:
				{
					printf("Incorrect selection! Enter 1 or 2\n");
					break;
				}
		}
		printf("\nDo you want to perform any operation again? (y/n)\n");
		scanf(" %c", &repeat);
	}
	
	return 0;
}

void readMatrix(int a[][10], int rowSize, int colSize)
{
	int i, j;
	for(i=0; i<rowSize; i++)
	{
		for(j=0; j<colSize; j++)
		{
			printf("Enter element [%d][%d]: ", (i+1), (j+1));
			scanf("%d", &a[i][j]);
		}
	}
	printf("\n");
}

void writeMatrix(int a[][10], int rowSize, int colSize)
{
	int i, j;
	printf("\n");
	for(i=0; i<rowSize; i++)
	{
		for(j=0; j<colSize; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}

void addMatrix(int a[][10], int rowA, int colA, int b[][10], int c[][10])
{
	int i, j;
	for(i=0; i<rowA; i++)
	{
		for(j=0; j<colA; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
}

void subtractMatrix(int a[][10], int rowA, int colA, int b[][10], int c[][10])
{
	int i, j;
	for(i=0; i<rowA; i++)
	{
		for(j=0; j<colA; j++)
		{
			c[i][j] = a[i][j] - b[i][j];
		}
	}
}
