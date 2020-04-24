/*

Q. Program to dynamically allocate 2D array using double pointer.

*/

#include <stdio.h>
#include <stdlib.h>

// M x N matrix
#define M 4
#define N 5

// Dynamically Allocate Memory for 2D Array
int main()
{
	int r , c;
	
	// dynamically create array of pointers of size M
	int **A = (int **)malloc(M * sizeof(int *));		// or int* A[M];
	if (A == NULL)
	{
		fprintf(stderr, "out of memory\n");
		exit(0);
	}

	// dynamically allocate memory of size M*N and let *A point to it
	*A = (int *)malloc(sizeof(int) * M * N);

	// position allocated memory across M pointers
	for (r = 0; r < M; r++)
		A[r] = (*A + N*r);

	// assign values to allocated memory
	for (r = 0; r < M; r++)
		for (c = 0; c < N; c++)
			A[r][c] = rand() % 100;	// or *(A[r] + c) or *(*(A + r) + c)

	// print the 2D array
	for (r = 0; r < M; r++)
	{
		for (c = 0; c < N; c++)
			printf("%d ", A[r][c]);	// or *(A[r] + c) or *(*(A + r) + c)

		printf("\n");
	}

	// deallocate memory
	free(*A);
	free(A);

	return 0;
}

/**

41 67 34 0 69
24 78 58 62 64
5 45 81 27 61
91 95 42 27 36

*/
