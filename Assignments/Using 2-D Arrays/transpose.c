/**

Q. Write a program to read a matrix of order rXc and store its transpose in another matrix. Display the Transpose matrix.

**/
 
#include<stdio.h>

void main()
{
	int i, j, r, c;
	printf("Enter the order of matrix : ");
	scanf("%d %d", &r, &c);
	int a[r][c];
	int b[c][r];
	printf("Enter the elements of matrix :\n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
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
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			b[j][i] = a[i][j];
		}
	}
	printf("\nTranspose of a matrix is as below:\n");
	for(i=0; i<c; i++)
	{
		for(j=0; j<r; j++) 
		{
			printf("%d ", b[i][j]);
   		}
		printf("\n");
 	}
}

/** OUTPUT

$ cc transpose.c
$ ./a.out
Enter the order of matrix : 2 3
Enter the elements of matrix :
1 2 3
4 5 6

Input matrix :
1 2 3
4 5 6

Transpose of a matrix is as below:
1 4
2 5
3 6

**/

