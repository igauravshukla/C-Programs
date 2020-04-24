/**

Q. Program to dynamically allocate 2D array using single pointer.

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
	// dynamically allocate memory of size M*N
	int* A = (int*)malloc(M * N * sizeof(int));

	if (A == NULL)
	{
		fprintf(stderr, "Out of memory");
		exit(0);
	}

	// assign values to allocated memory
	for (r = 0; r < M; r++)
		for (c = 0; c < N; c++)
			*(A + r*N + c) = rand() % 100;

	// print the 2D array
	for (r = 0; r < M; r++)
	{
		for (c = 0; c < N; c++)
			printf("%d ", (A + r*N)[c]);	// or *(A + r*N + c)

		printf("\n");
	}

	// deallocate memory
	free(A);

	return 0;
}

/**

41 67 34 0 69
24 78 58 62 64
5 45 81 27 61
91 95 42 27 36

*/
