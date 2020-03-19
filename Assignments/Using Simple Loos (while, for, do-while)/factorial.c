/*

Q. Program to find factorial of given number n.

*/

#include<stdio.h>

void main()
{
	int i, n, f=1;
	printf("Enter the value of n : ");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		f = f * i;
	}
	printf("%d! = %d\n", n, f);
}

/*	OUTPUT

$ cc factorial.c
$ ./a.out
Enter the value of n : 2
5! = 120 

*/
