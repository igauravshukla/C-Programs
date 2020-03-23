/*

Q. Write a program to display n lines of following pattern.
 1 
 1  2 
 1  2  3 
 1  2  3  4 

*/

#include<stdio.h>

void main()
{
	int n, k, i;
	printf("Enter the value of n : ");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		for(k=1; k<=i; k++)
		{
			printf(" %d ", k);
		}
		printf("\n");
	}
}

/**	OUTPUT

$ cc pattern3.c
$ ./a.out
Enter the value of n : 4
 1 
 1  2 
 1  2  3 
 1  2  3  4 

$ ./a.out
Enter the value of n : 6
 1
 1  2
 1  2  3
 1  2  3  4
 1  2  3  4  5
 1  2  3  4  5  6

**/
