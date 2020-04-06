/**

Q. Write a function to read a matrix A or order rXc. Write another function to display matrix A. Use these functions in main to
read two matrices and display result of matrix multiplication. Perform necessary checks before multiplying.

**/

#include<stdio.h>
#include<stdlib.h>

void readmatrix(int a[20][20], int r, int c)
{
	int i, j;
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
}

void displaymatrix(int a[20][20], int r, int c)
{
	int i, j;
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

void main()
{
	int i, j, k, r1, c1, r2, c2, a[20][20], b[20][20], c[20][20];
	printf("Enter the order of first matrix : ");
	scanf("%d %d", &r1, &c1);
	printf("Enter elements of first matrix :\n");
	readmatrix(a, r1, c1);
	printf("\nFirst matrix :\n");
	displaymatrix(a,r1,c1);
	printf("\nEnter the order of second matrix : ");
	scanf("%d %d", &r2, &c2);
	if(c1 != r2)
	{
		printf("Matrix multiplication is not possible...\n");
		exit(0);
	}
	printf("Enter elements of second matrix :\n");
	readmatrix(b, r2, c2);
	printf("\nSecond matrix :\n");
	displaymatrix(b,r2,c2);
	printf("\nMatrix multiplication is possible...\n");
	printf("Multiplication matrix is as below:\n");
	for(i=0; i<r1; i++)
	{
		for(j=0; j<c2; j++)
		{
			c[i][j] = 0;
			for(k=0; k<c1; k++)
			{
				c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
			}
		}
	}
	displaymatrix(c, r1, c2);
}

/**	OUTPUT

$ cc matrix_multiplication.c
$ ./a.out
Enter the order of first matrix : 2 3
Enter elements of first matrix :
1 2 3
2 3 4

First matrix :
1 2 3
2 3 4

Enter the order of second matrix : 3 4
Enter elements of second matrix :
1 2 3 4
4 5 6 7
8 9 10 11

Second matrix :
1 2 3 4
4 5 6 7
8 9 10 11

Matrix multiplication is possible...
Multiplication matrix is as below:
33 39 45 51
46 55 64 73

$ ./a.out
Enter the order of first matrix : 2 3
Enter elements of first matrix :
1 2 3
3 4 5

First matrix :
1 2 3
3 4 5

Enter the order of second matrix : 2 3
Matrix multiplication is not possible...

**/

