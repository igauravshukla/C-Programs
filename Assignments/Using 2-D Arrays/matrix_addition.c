/**

Q. Write a function to read a matrix A or order rXc. Write another function to display matrix A. Use these functions in main to
read two matrices and display result of matrix addition. Perform necessary checks before adding.

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
	int i, j, r1, c1, c2, r2, a[20][20], b[20][20], c[20][20];
	printf("Enter the order of first matrix : ");
	scanf("%d %d", &r1, &c1);
	printf("Enter elements of first matrix :\n");
	readmatrix(a, r1, c1);
	printf("\nFirst matrix :\n");
	displaymatrix(a,r1,c1);
	printf("\nEnter the order of second matrix : ");
	scanf("%d %d", &r2, &c2);
	if(r1!=r2 || c1!=c2)
	{
		printf("Matrix addition is not possible...\n");
		exit(0);
	}
	printf("Enter elements of second matrix :\n");
	readmatrix(b, r2, c2);
	printf("\nSecond matrix :\n");
	displaymatrix(b, r1, c1);
	printf("\nMatrix addition is possible...\n");
	printf("Addition matrix is as below:\n");
	for(i=0; i<r1; i++)
	{
		for(j=0; j<c1; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	displaymatrix(c, r1, c1);
}

/** OUTPUT

$ cc matrix_addition.c
$ ./a.out
Enter the order of first matrix : 2 3
Enter elements of first matrix :
1 2 3
2 3 4

First matrix :
1 2 3
2 3 4

Enter the order of second matrix : 2 3
Enter elements of second matrix :
2 3 4
3 4 5

Second matrix :
2 3 4
3 4 5

Matrix addition is possible...
Addition matrix is as below:
3 5 7
5 7 9

$ ./a.out
Enter the order of first matrix : 2 3
Enter elements of first matrix :
1 2 3
3 4 5

First matrix :
1 2 3
3 4 5

Enter the order of second matrix : 2 2
Matrix addition is not possible...

**/

