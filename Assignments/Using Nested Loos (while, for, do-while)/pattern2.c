/*

Q. Write a program to display n lines of following pattern.

*/

#include<stdio.h>

void main()
{
	int n, k, i;
	printf("Number of lines : ");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		for(k=1; k<=(n-i+1); k++)
		{
			printf(" %d ", k);
		}
		printf("\n");
	}
}

/** OUTPUT

$ cc pattern2.c
$ ./a.out
Number of lines : 6
 1  2  3  4  5  6
 1  2  3  4  5
 1  2  3  4
 1  2  3
 1  2
 1

$ ./a.out
Number of lines : 4
 1  2  3  4 
 1  2  3 
 1  2 
 1 

**/

