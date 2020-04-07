/**

Q. Write a program to read a matrix of order n X m. Find the matrix of order (n+1) X (m+1) such that (n+1)th row contains
maximum number from corressponding column and (m+1)th column contains maximum number from corresspondong row.

**/

#include<stdio.h>

void main()
{
	int i, j, m , max, n, a[20][20];
	printf("Enter the order of matrix : ");
	scanf("%d %d", &n, &m);
	printf("Enter the elements of matrix:\n");
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("\nInput matrix :\n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++) 
		{
			printf("%d ", a[i][j]);
   		}
		printf("\n");
 	}
	for(i=0; i<n; i++)
	{
		max = a[i][0];
		for(j=1; j<m; j++)
		{
			if(max < a[i][j])
				max = a[i][j];
		} 
		a[i][m] = max;
	}
	for(j=0; j<=m; j++)
	{
		max = a[0][j];
		for(i=1; i<n; i++)
		{
			if(max < a[i][j])
				max = a[i][j];
		}
		a[n][j] = max;
	}
	printf("\nMatrix of order n+1 X m+1 is as below:\n");
	for(i=0; i<(n+1); i++)
	{
		for(j=0; j<(m+1); j++) 
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	} 
}

/**	OUTPUT

$ cc order_change_matrix.c
$ ./a.out
Enter the order of matrix : 2 3
Enter the elements of matrix:
3 4 5
6 1 7

Input matrix :
3 4 5
6 1 7

Matrix of order n+1 X m+1 is as below:
3 4 5 5
6 1 7 7
6 4 7 7

**/
