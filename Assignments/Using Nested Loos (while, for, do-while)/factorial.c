/*

Q. Write a program to display factorial of n numbers.

*/

#include<stdio.h>

void main()
{
	int n, k, j, f;
	printf("Enter the value of n : ");
	scanf("%d", &n);
	for(k=1; k<=n; k++)
	{
		f = 1;
		for(j=1; j<=k; j++)
		{
			f = f * j;
		}
		printf("Factorial of %d = %d\n", k, f);
	}
}

/**	OUTPUT
$ cc factorial.c
$ ./a.out
Enter the value of n : 4
Factorial of 1 = 1
Factorial of 2 = 2
Factorial of 3 = 6
Factorial of 4 = 24

**/

